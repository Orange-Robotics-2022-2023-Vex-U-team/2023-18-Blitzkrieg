using namespace vex;

extern brain Brain;

// VEXcode devices
extern controller Controller1;
extern motor ChassisLR;
extern motor ChassisLF;
extern motor ChassisRF;
extern motor ChassisRR;
extern rotation Left;
extern rotation Right;
extern rotation Center;
extern motor IntakeMotor;

/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 * 
 * This should be called at the start of your int main function.
 */
void  vexcodeInit( void );