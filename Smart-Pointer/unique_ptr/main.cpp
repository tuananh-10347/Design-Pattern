#include <iostream>
#include <memory>

int main() {
    // Khởi tạo một unique pointer quản lý một vùng nhớ động có giá trị là 5
    std::unique_ptr<int> p(new int(5));
    
    // Truy xuất giá trị của con trỏ
    std::cout << "Giá trị của con trỏ p là: " << *p << std::endl;
    
    // Chuyển quyền sở hữu của con trỏ p cho con trỏ q
    std::unique_ptr<int> q = std::move(p);
    
    // Kiểm tra con trỏ p và q
    std::cout << "Con trỏ p có giá trị là: " << p.get() << std::endl;
    std::cout << "Con trỏ q có giá trị là: " << q.get() << std::endl;
    
    // Thử gán lại giá trị của con trỏ p
    p.reset(new int(10));
    
    // Kiểm tra lại giá trị của con trỏ p và q
    std::cout << "Giá trị của con trỏ p là: " << *p << std::endl;
    std::cout << "Giá trị của con trỏ q là: " << *q << std::endl;
    
    // Kết thúc chương trình, vùng nhớ động sẽ được tự động giải phóng
    return 0;
}
