#define INIT_MESSAGE "Initializing configs to custom settings"

//**** GLOBAL / GENERAL SETTINGS ******************************************************

//*****************************************************************************
//*** Motor Settings **********************************************************
//*****************************************************************************

// MOTOR 1
#define M1_MOTOR_MAP                AXIS_X_EXTERNAL         // {1ma: AXIS_X, AXIS_Y...
#define M1_STEP_ANGLE               1.8                     // {1sa: degrees per step
#define M1_TRAVEL_PER_REV           10.0                    // {1tr:  1.25 is a typical value for a screw axis
#define M1_MICROSTEPS               16                      // {1mi:  1,2,4,8,    16,32 (G2 ONLY)
#define M1_STEPS_PER_UNIT           0                       // {1su:  steps to issue per unit of length or degrees of rotation
#define M1_POLARITY                 0                       // {1po:  0=normal direction, 1=inverted direction
#define M1_ENABLE_POLARITY          IO_ACTIVE_LOW           // {1ep:  IO_ACTIVE_LOW or IO_ACTIVE_HIGH
#define M1_STEP_POLARITY            IO_ACTIVE_HIGH          // {1ps:  IO_ACTIVE_LOW or IO_ACTIVE_HIGH
#define M1_POWER_MODE               MOTOR_ALWAYS_POWERED    // {1pm:  MOTOR_DISABLED, MOTOR_ALWAYS_POWERED, MOTOR_POWERED_IN_CYCLE, MOTOR_POWERED_ONLY_WHEN_MOVING
#define M1_POWER_LEVEL              0.0                     // {1pl:   0.0=no power, 1.0=max power

// MOTOR 2
#define M2_MOTOR_MAP                AXIS_Y_EXTERNAL
#define M2_STEP_ANGLE               1.8
#define M2_TRAVEL_PER_REV           10.0
#define M2_MICROSTEPS               16
#define M2_STEPS_PER_UNIT           0
#define M2_POLARITY                 0
#define M2_ENABLE_POLARITY          IO_ACTIVE_LOW
#define M2_STEP_POLARITY            IO_ACTIVE_HIGH
#define M2_POWER_MODE               MOTOR_ALWAYS_POWERED
#define M2_POWER_LEVEL              0.0

// MOTOR 3
#define M3_MOTOR_MAP                AXIS_Y_EXTERNAL
#define M3_STEP_ANGLE               1.8
#define M3_TRAVEL_PER_REV           10.0
#define M3_MICROSTEPS               16
#define M3_STEPS_PER_UNIT           0
#define M3_POLARITY                 0
#define M3_ENABLE_POLARITY          IO_ACTIVE_LOW
#define M3_STEP_POLARITY            IO_ACTIVE_HIGH
#define M3_POWER_MODE               MOTOR_ALWAYS_POWERED
#define M3_POWER_LEVEL              0.0

// MOTOR 4
#define M4_MOTOR_MAP                AXIS_Z_EXTERNAL
#define M4_STEP_ANGLE               1.8
#define M4_TRAVEL_PER_REV           40.0
#define M4_MICROSTEPS               16
#define M4_STEPS_PER_UNIT           0
#define M4_POLARITY                 0
#define M4_ENABLE_POLARITY          IO_ACTIVE_LOW
#define M4_STEP_POLARITY            IO_ACTIVE_HIGH
#define M4_POWER_MODE               MOTOR_ALWAYS_POWERED
#define M4_POWER_LEVEL              0.0

// MOTOR 5
#define M5_MOTOR_MAP                AXIS_A_EXTERNAL
#define M5_STEP_ANGLE               1.8
#define M5_TRAVEL_PER_REV           360.0
#define M5_MICROSTEPS               16
#define M5_STEPS_PER_UNIT           0
#define M5_POLARITY                 0
#define M5_ENABLE_POLARITY          IO_ACTIVE_LOW
#define M5_STEP_POLARITY            IO_ACTIVE_HIGH
#define M5_POWER_MODE               MOTOR_ALWAYS_POWERED
#define M5_POWER_LEVEL              0.0

// MOTOR 6
#define M6_MOTOR_MAP                AXIS_C_EXTERNAL
#define M6_STEP_ANGLE               1.8
#define M6_TRAVEL_PER_REV           360.0
#define M6_MICROSTEPS               8
#define M6_STEPS_PER_UNIT           0
#define M6_POLARITY                 0
#define M6_ENABLE_POLARITY          IO_ACTIVE_LOW
#define M6_STEP_POLARITY            IO_ACTIVE_HIGH
#define M6_POWER_MODE               MOTOR_DISABLED
#define M6_POWER_LEVEL              0.0

// MOTOR 7
#define M7_MOTOR_MAP                AXIS_U_EXTERNAL
#define M7_STEP_ANGLE               1.8
#define M7_TRAVEL_PER_REV           360.0
#define M7_MICROSTEPS               8
#define M7_STEPS_PER_UNIT           0
#define M7_POLARITY                 0
#define M7_ENABLE_POLARITY          IO_ACTIVE_LOW
#define M7_STEP_POLARITY            IO_ACTIVE_HIGH
#define M7_POWER_MODE               MOTOR_DISABLED
#define M7_POWER_LEVEL              0.0

//*****************************************************************************
//*** Axis Settings ***********************************************************
//*****************************************************************************

// X AXIS
#define X_AXIS_MODE                 AXIS_STANDARD           // {xam:  see canonical_machine.h cmAxisMode for valid values
#define X_VELOCITY_MAX              18000.0                 // {xvm:  G0 max velocity in mm/min
#define X_FEEDRATE_MAX              18000.0                 // {xfr:  G1 max feed rate in mm/min
#define X_TRAVEL_MIN                0.0                     // {xtn:  minimum travel for soft limits
#define X_TRAVEL_MAX                544.0                   // {xtm:  travel between switches or crashes
#define X_JERK_MAX                  1000.0                  // {xjm:
#define X_JERK_HIGH_SPEED           1000.0                  // {xjh:
#define X_HOMING_INPUT              1                       // {xhi:  input used for homing or 0 to disable
#define X_HOMING_DIRECTION          0                       // {xhd:  0=search moves negative, 1= search moves positive
#define X_SEARCH_VELOCITY           500.0                   // {xsv:  minus means move to minimum switch
#define X_LATCH_VELOCITY            100.0                   // {xlv:  mm/min
#define X_LATCH_BACKOFF             4.0                     // {xlb:  mm
#define X_ZERO_BACKOFF              15.0                    // {xzb:  mm

// Y AXIS
#define Y_AXIS_MODE                 AXIS_STANDARD
#define Y_VELOCITY_MAX              12000.0
#define Y_FEEDRATE_MAX              12000.0
#define Y_TRAVEL_MIN                0.0
#define Y_TRAVEL_MAX                486.0
#define Y_JERK_MAX                  1000.0
#define Y_JERK_HIGH_SPEED           1000.0
#define Y_HOMING_INPUT              5
#define Y_HOMING_DIRECTION          0
#define Y_SEARCH_VELOCITY           500.0
#define Y_LATCH_VELOCITY            100.0
#define Y_LATCH_BACKOFF             4.0
#define Y_ZERO_BACKOFF              2.0

// Z AXIS
#define Z_AXIS_MODE                 AXIS_STANDARD
#define Z_VELOCITY_MAX              1000.0
#define Z_FEEDRATE_MAX              1000.0
#define Z_TRAVEL_MAX                0.0
#define Z_TRAVEL_MIN                -37.0
#define Z_JERK_MAX                  500.0
#define Z_JERK_HIGH_SPEED           500.0
#define Z_HOMING_INPUT              7
#define Z_HOMING_DIRECTION          1
#define Z_SEARCH_VELOCITY           250.0
#define Z_LATCH_VELOCITY            25.0
#define Z_LATCH_BACKOFF             4.0
#define Z_ZERO_BACKOFF              2.0

// U AXIS
#define U_AXIS_MODE                 AXIS_DISABLED           // {xam:  see canonical_machine.h cmAxisMode for valid values

// V AXIS
#define V_AXIS_MODE                 AXIS_DISABLED

// W AXIS
#define W_AXIS_MODE                 AXIS_DISABLED

// A AXIS
#define A_AXIS_MODE                 AXIS_RADIUS
#define A_RADIUS                    (M5_TRAVEL_PER_REV/(2*3.14159265))
#define A_VELOCITY_MAX              1000
#define A_FEEDRATE_MAX              A_VELOCITY_MAX
#define A_TRAVEL_MIN                -1.0                    // min/max the same means infinite, no limit
#define A_TRAVEL_MAX                -1.0
#define A_JERK_MAX                  (X_JERK_MAX*(360/M1_TRAVEL_PER_REV))
#define A_JERK_HIGH_SPEED           A_JERK_MAX
#define A_HOMING_INPUT              0
#define A_HOMING_DIRECTION          0
#define A_SEARCH_VELOCITY           (A_VELOCITY_MAX * 0.500)
#define A_LATCH_VELOCITY            (A_VELOCITY_MAX * 0.100)
#define A_LATCH_BACKOFF             5.0
#define A_ZERO_BACKOFF              2.0

// B AXIS
#define B_AXIS_MODE                 AXIS_DISABLED

// C AXIS
#define C_AXIS_MODE                 AXIS_DISABLED

//*****************************************************************************
//*** GPIO Input / Output Settings ********************************************
//*****************************************************************************

// Xmin
#define DI1_MODE                    IO_ACTIVE_HIGH     // Normally closed
#define DI1_ACTION                  INPUT_ACTION_STOP
#define DI1_FUNCTION                INPUT_FUNCTION_LIMIT

// Xmax
#define DI2_MODE                    IO_ACTIVE_HIGH     // Normally closed
#define DI2_ACTION                  INPUT_ACTION_STOP
#define DI2_FUNCTION                INPUT_FUNCTION_LIMIT

// Y1min
#define DI3_MODE                    IO_ACTIVE_HIGH     // Normally closed
#define DI3_ACTION                  INPUT_ACTION_STOP
#define DI3_FUNCTION                INPUT_FUNCTION_LIMIT

// Y1max
#define DI4_MODE                    IO_ACTIVE_HIGH     // Normally closed
#define DI4_ACTION                  INPUT_ACTION_STOP
#define DI4_FUNCTION                INPUT_FUNCTION_LIMIT

// Y2min
#define DI5_MODE                    IO_ACTIVE_HIGH     // Normally closed
#define DI5_ACTION                  INPUT_ACTION_STOP
#define DI5_FUNCTION                INPUT_FUNCTION_LIMIT

// Y2max
#define DI6_MODE                    IO_ACTIVE_HIGH     // Normally closed
#define DI6_ACTION                  INPUT_ACTION_STOP
#define DI6_FUNCTION                INPUT_FUNCTION_LIMIT

// Z1min
#define DI7_MODE                    IO_ACTIVE_LOW     // Normally open
#define DI7_ACTION                  INPUT_ACTION_STOP
#define DI7_FUNCTION                INPUT_FUNCTION_LIMIT

// Z2min
#define DI8_MODE                    IO_ACTIVE_LOW     // Normally open
#define DI8_ACTION                  INPUT_ACTION_STOP
#define DI8_FUNCTION                INPUT_FUNCTION_LIMIT

// Probe
#define DI9_MODE                    IO_ACTIVE_HIGH     // Normally closed
#define DI9_ACTION                  INPUT_ACTION_NONE
#define DI9_FUNCTION                INPUT_FUNCTION_PROBE

// Estop
#define DI10_MODE                   IO_ACTIVE_HIGH     // Normally closed
#define DI10_ACTION                 INPUT_ACTION_PANIC
#define DI10_FUNCTION               INPUT_FUNCTION_NONE

#define DI11_MODE                   IO_MODE_DISABLED
#define DI11_ACTION                 INPUT_ACTION_NONE
#define DI11_FUNCTION               INPUT_FUNCTION_NONE

#define DI12_MODE                   IO_MODE_DISABLED
#define DI12_ACTION                 INPUT_ACTION_NONE
#define DI12_FUNCTION               INPUT_FUNCTION_NONE

// DIGITAL OUTPUTS - Currently these are hard-wired to extruders

#define DO1_MODE                    IO_MODE_DISABLED
#define DO2_MODE                    IO_MODE_DISABLED
#define DO3_MODE                    IO_MODE_DISABLED
#define DO4_MODE                    IO_MODE_DISABLED
#define DO5_MODE                    IO_MODE_DISABLED
#define DO6_MODE                    IO_MODE_DISABLED
#define DO7_MODE                    IO_MODE_DISABLED
#define DO8_MODE                    IO_MODE_DISABLED
#define DO9_MODE                    IO_MODE_DISABLED
#define DO10_MODE                   IO_MODE_DISABLED
#define DO11_MODE                   IO_MODE_DISABLED
#define DO12_MODE                   IO_MODE_DISABLED
#define DO13_MODE                   IO_MODE_DISABLED

// *** PWM Settings *** //

#define P1_PWM_FREQUENCY            100                   // in Hz
#define P1_CW_SPEED_LO              400                   // in RPM (arbitrary units)
#define P1_CW_SPEED_HI              1000
#define P1_CW_PHASE_LO              0.4                   // phase [0..1]
#define P1_CW_PHASE_HI              1.0
#define P1_CCW_SPEED_LO             400
#define P1_CCW_SPEED_HI             1000
#define P1_CCW_PHASE_LO             0.4
#define P1_CCW_PHASE_HI             1.0
#define P1_PWM_PHASE_OFF            0.0

#define P3_PWM_FREQUENCY            100                   // in Hz
#define P3_CW_SPEED_LO              0                     // (arbitrary units)
#define P3_CW_SPEED_HI              1000
#define P3_CW_PHASE_LO              0.0                   // phase [0..1]
#define P3_CW_PHASE_HI              1.0
#define P3_CCW_SPEED_LO             0
#define P3_CCW_SPEED_HI             1000
#define P3_CCW_PHASE_LO             0.0
#define P3_CCW_PHASE_HI             1.0
#define P3_PWM_PHASE_OFF            0.0

#define P4_PWM_FREQUENCY            100                   // in Hz
#define P4_CW_SPEED_LO              0                  // (arbitrary units)
#define P4_CW_SPEED_HI              1000
#define P4_CW_PHASE_LO              0.0                    // phase [0..1]
#define P4_CW_PHASE_HI              1.0
#define P4_CCW_SPEED_LO             0
#define P4_CCW_SPEED_HI             1000
#define P4_CCW_PHASE_LO             0.0
#define P4_CCW_PHASE_HI             1.0
#define P4_PWM_PHASE_OFF            0.0
