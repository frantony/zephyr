/*
 * Copyright (c) 2017 Imagination Technologies Ltd.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef __QEMU_MALTA_SOC_H__
#define __QEMU_MALTA_SOC_H__

#ifndef _ASMLANGUAGE
#include <irq.h>

#define MIPS_MACHINE_SOFT_IRQ       0  /* Machine Software Interrupt */

/*
 * Before R2 the timer counter interrupt was fixed to IE7.
 * Since R2 the number has to be read from the c0_intctl register.
 */
#define MIPS_MACHINE_TIMER_IRQ      7  /* Machine Timer Interrupt */

#define SOC_CAUSE_EXP_MASK			0x7C  /* Exception code Mask */

#endif /* !_ASMLANGUAGE */

#endif /* __QEMU_MALTA_SOC_H__ */
