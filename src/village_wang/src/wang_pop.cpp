
#include "rclcpp/rclcpp.hpp"


class SingleeDogNode: public rclcpp::Node
{
private:
    /* data */
public:
    SingleeDogNode (std::string name);Node(name)
};

SingleeDogNode::SingleeDogNode(/* args */)
{
    RCLCPP_INFO(this->get_logger(), "%s节点已经启动.",name.c_str());
}

SingleeDogNode::~SingleeDogNode()
{
}



int main(int argc, char **argv)
{
    // 1. 初始化 rclcpp
    rclcpp::init(argc, argv);
    
    // 2. 创建一个节点，名为 "node_01"
    auto node = std::make_shared<rclcpp::Node>("wang2");
    
    // 3. 打印日志信息
    RCLCPP_INFO(node->get_logger(), "node_01节点已经启动.");
    
    // 4. 进入事件循环（等待 Ctrl+C）
    rclcpp::spin(node);
    
    // 5. 关闭 rclcpp
    rclcpp::shutdown();
    return 0;
}