import rclpy
from rclpy.node import Node   

class WriterNode(Node):        

    def __init__(self, name):
        super().__init__(name)                    
        self.get_logger().info(f"hello, {name}") 
        self.cout=0 
        self.timer_period=5
        self.timer=self .create_timer(self.timer_period)


def main(args=None):
    rclpy.init(args=args)

    li4_node = WriterNode("li4_node")   
    
    rclpy.spin(li4_node)                
    rclpy.shutdown()                  

