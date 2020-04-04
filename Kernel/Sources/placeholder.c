/* UTK configuration file */
#include <config.h>
#include <cpu.h>
#include <cpu_structs.h>
#include <lib/stddef.h>
#include <placeholder.h>
#include <acpi.h>
/* Tests header file */
#if TEST_MODE_ENABLED
#include <Tests/test_bank.h>
#endif

void sched_set_thread_termination_cause(int value)
{
    (void) value;
}

void sched_terminate_thread(void)
{

}