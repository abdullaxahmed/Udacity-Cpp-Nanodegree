#include "processor.h"
#include "linux_parser.h"

// TODO: Return the aggregate CPU utilization
float Processor::Utilization() {
    long active = LinuxParser::ActiveJiffies();  
    long total = LinuxParser::Jiffies();         
    long delta_active = active - prev_active_jiffies_;
    long delta_total = total - prev_total_jiffies_;
    prev_active_jiffies_ = active;
    prev_total_jiffies_ = total;
    return static_cast<float>(delta_active) / delta_total;
}