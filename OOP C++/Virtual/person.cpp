#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

class Nguoi {
public:
    std::string ho_ten;
    int nam_sinh;

    Nguoi(std::string ho_ten, int nam_sinh) : ho_ten(ho_ten), nam_sinh(nam_sinh) {}

    virtual ~Nguoi() {}

    virtual void dummy() {} //
};

class BN_O : public Nguoi {
public:
    std::string ten_benh;
    double tien_dieu_tri;

    BN_O(std::string ho_ten, int nam_sinh, std::string ten_benh, double tien_dieu_tri)
        : Nguoi(ho_ten, nam_sinh), ten_benh(ten_benh), tien_dieu_tri(tien_dieu_tri) {}
};

class BN_I : public Nguoi {
public:
    std::string ten_benh_chuan_doan;
    double tien_thuoc;
    double tien_o;

    BN_I(std::string ho_ten, int nam_sinh, std::string ten_benh_chuan_doan, double tien_thuoc, double tien_o)
        : Nguoi(ho_ten, nam_sinh), ten_benh_chuan_doan(ten_benh_chuan_doan), tien_thuoc(tien_thuoc), tien_o(tien_o) {}
};

class PhongKham {
private:
    std::vector<Nguoi*> danh_sach_benh_nhan;

public:
    void nhap_benh_nhan(Nguoi* benh_nhan) {
        danh_sach_benh_nhan.push_back(benh_nhan);
    }

    void in_danh_sach_benh_nhan() {
        std::cout << "Danh sach benh nhan:" << std::endl;
        for (const auto& benh_nhan : danh_sach_benh_nhan) {
            std::cout << "Ho ten: " << benh_nhan->ho_ten << std::endl;
            std::cout << "Nam sinh: " << benh_nhan->nam_sinh << std::endl;
            if (BN_O* bn_o = dynamic_cast<BN_O*>(benh_nhan)) {
                std::cout << "Loai benh nhan: Ngoai tru" << std::endl;
                std::cout << "Ten benh: " << bn_o->ten_benh << std::endl;
                std::cout << "Tien dieu tri: " << bn_o->tien_dieu_tri << std::endl;
            } else if (BN_I* bn_i = dynamic_cast<BN_I*>(benh_nhan)) {
                std::cout << "Loai benh nhan: Noi tru" << std::endl;
                std::cout << "Ten benh chuan doan: " << bn_i->ten_benh_chuan_doan << std::endl;
                std::cout << "Tien thuoc: " << bn_i->tien_thuoc << std::endl;
                std::cout << "Tien o: " << bn_i->tien_o << std::endl;
            }
            std::cout << std::endl;
        }
    }

    double tinh_tong_tien_thanh_toan() {
        double tong_tien = 0.0;
        for (const auto& benh_nhan : danh_sach_benh_nhan) {
            if (benh_nhan->nam_sinh < 1960) {
                if (BN_O* bn_o = dynamic_cast<BN_O*>(benh_nhan)) {
                    tong_tien += bn_o->tien_dieu_tri * 0.92; // Gi?m 8% ti?n đi?u tr?
                } else if (BN_I* bn_i = dynamic_cast<BN_I*>(benh_nhan)) {
                    double tong_tien_noi_tru = bn_i->tien_thuoc * 0.9 + bn_i->tien_o * 0.88; // Gi?m 10% ti?n thu?c và 12% ti?n ?
                    tong_tien += tong_tien_noi_tru;
                }
            } else {
                if (BN_O* bn_o = dynamic_cast<BN_O*>(benh_nhan)) {
                    tong_tien += bn_o->tien_dieu_tri;
                } else if (BN_I* bn_i = dynamic_cast<BN_I*>(benh_nhan)) {
                    tong_tien += bn_i->tien_thuoc + bn_i->tien_o;
                }
            }
        }
        return tong_tien;
    }

    void sap_xep_danh_sach_benh_nhan_theo_ten() {
        std::sort(danh_sach_benh_nhan.begin(), danh_sach_benh_nhan.end(),
            [](Nguoi* a, Nguoi* b) {
                return a->ho_ten < b->ho_ten;
            });
    }
};

int main() {
    PhongKham phong_kham;

    while (true) {
        std::cout << "======== MENU ========" << std::endl;
        std::cout << "1. Nhap benh nhan" << std::endl;
        std::cout << "2. In danh sach benh nhan" << std::endl;
        std::cout << "3. Tinh tong tien thanh toan" << std::endl;
        std::cout << "4. Sap xep danh sach benh nhan theo ten" << std::endl;
        std::cout << "0. Thoat" << std::endl;
        std::cout << "=======================" << std::endl;

        int lua_chon;
        std::cout << "Nhap lua chon cua ban: ";
        std::cin >> lua_chon;

        switch (lua_chon) {
            case 1: {
                std::cout << "1. Benh nhan ngoai tru" << std::endl;
                std::cout << "2. Benh nhan noi tru" << std::endl;
                int loai_benh_nhan;
                std::cout << "Nhap loai benh nhan: ";
                std::cin >> loai_benh_nhan;

                std::string ho_ten;
                int nam_sinh;
                std::cout << "Nhap ho ten: ";
                std::cin.ignore();
                std::getline(std::cin, ho_ten);
                std::cout << "Nhap nam sinh: ";
                std::cin >> nam_sinh;

                if (loai_benh_nhan == 1) {
                    std::string ten_benh;
                    double tien_dieu_tri;
                    std::cout << "Nhap ten benh: ";
                    std::cin.ignore();
                    std::getline(std::cin, ten_benh);
                    std::cout << "Nhap tien dieu tri: ";
                    std::cin >> tien_dieu_tri;

                    BN_O* benh_nhan_ngoai_tru = new BN_O(ho_ten, nam_sinh, ten_benh, tien_dieu_tri);
                    phong_kham.nhap_benh_nhan(benh_nhan_ngoai_tru);
                } else if (loai_benh_nhan == 2) {
                    std::string ten_benh_chuan_doan;
                    double tien_thuoc;
                    double tien_o;
                    std::cout << "Nhap ten benh chuan doan: ";
                    std::cin.ignore();
                    std::getline(std::cin, ten_benh_chuan_doan);
                    std::cout << "Nhap tien thuoc: ";
                    std::cin >> tien_thuoc;
                    std::cout << "Nhap tien o: ";
                    std::cin >> tien_o;

                    BN_I* benh_nhan_noi_tru = new BN_I(ho_ten, nam_sinh, ten_benh_chuan_doan, tien_thuoc, tien_o);
                    phong_kham.nhap_benh_nhan(benh_nhan_noi_tru);
                }

                std::cout << "Da nhap benh nhan." << std::endl;
                break;
            }
            case 2:
                phong_kham.in_danh_sach_benh_nhan();
                break;
            case 3: {
                double tong_tien = phong_kham.tinh_tong_tien_thanh_toan();
                std::cout << "Tong tien thanh toan: " << tong_tien << std::endl;
                break;
            }
            case 4:
                phong_kham.sap_xep_danh_sach_benh_nhan_theo_ten();
                std::cout << "Danh sach benh nhan da sap xep theo ten." << std::endl;
                break;
            case 0:
                return 0;
            default:
                std::cout << "Lua chon khong hop le. Vui long nhap lai." << std::endl;
                break;
        }

        std::cout << std::endl;
    }

    return 0;
}
