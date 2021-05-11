/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "D:/Work Zone/FPGA/TX/TX_UART_Module/TX_Module.v";
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {0, 0};
static int ng3[] = {1, 0};
static unsigned int ng4[] = {1U, 0U};
static int ng5[] = {15, 0};
static unsigned int ng6[] = {2U, 0U};
static int ng7[] = {7, 0};
static unsigned int ng8[] = {3U, 0U};



static void Always_47_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    t1 = (t0 + 4512U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 5080);
    *((int *)t2) = 1;
    t3 = (t0 + 4544);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(48, ng0);

LAB5:    xsi_set_current_line(49, ng0);
    t4 = (t0 + 3592);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 3432);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 2, 0LL);
    goto LAB2;

}

static void Always_53_1(char *t0)
{
    char t18[8];
    char t22[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    int t15;
    char *t16;
    char *t17;
    char *t19;
    char *t20;
    char *t21;
    char *t23;

LAB0:    t1 = (t0 + 4760U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 5096);
    *((int *)t2) = 1;
    t3 = (t0 + 4792);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(54, ng0);

LAB5:    xsi_set_current_line(55, ng0);
    t4 = (t0 + 2072U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(56, ng0);

LAB9:    xsi_set_current_line(57, ng0);
    t11 = (t0 + 3432);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);

LAB10:    t14 = ((char*)((ng1)));
    t15 = xsi_vlog_unsigned_case_compare(t13, 2, t14, 2);
    if (t15 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng4)));
    t15 = xsi_vlog_unsigned_case_compare(t13, 2, t2, 2);
    if (t15 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng6)));
    t15 = xsi_vlog_unsigned_case_compare(t13, 2, t2, 2);
    if (t15 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng8)));
    t15 = xsi_vlog_unsigned_case_compare(t13, 2, t2, 2);
    if (t15 == 1)
        goto LAB17;

LAB18:
LAB20:
LAB19:    xsi_set_current_line(135, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3592);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);

LAB21:    goto LAB8;

LAB11:    xsi_set_current_line(59, ng0);

LAB22:    xsi_set_current_line(61, ng0);
    t16 = ((char*)((ng2)));
    t17 = (t0 + 3112);
    xsi_vlogvar_wait_assign_value(t17, t16, 0, 0, 3, 0LL);
    xsi_set_current_line(62, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3272);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(63, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2792);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(64, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2632);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(65, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2472);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(66, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2792);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(67, ng0);
    t2 = (t0 + 1752U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB23;

LAB24:    xsi_set_current_line(74, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3592);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);

LAB25:    goto LAB21;

LAB13:    xsi_set_current_line(77, ng0);

LAB27:    xsi_set_current_line(78, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 2632);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(79, ng0);
    t2 = (t0 + 3272);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t18, 0, 8);
    t11 = (t4 + 4);
    if (*((unsigned int *)t11) != 0)
        goto LAB29;

LAB28:    t12 = (t5 + 4);
    if (*((unsigned int *)t12) != 0)
        goto LAB29;

LAB32:    if (*((unsigned int *)t4) < *((unsigned int *)t5))
        goto LAB30;

LAB31:    t16 = (t18 + 4);
    t6 = *((unsigned int *)t16);
    t7 = (~(t6));
    t8 = *((unsigned int *)t18);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB33;

LAB34:    xsi_set_current_line(84, ng0);

LAB37:    xsi_set_current_line(85, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3272);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(86, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3592);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);

LAB35:    goto LAB21;

LAB15:    xsi_set_current_line(94, ng0);

LAB38:    xsi_set_current_line(95, ng0);
    t3 = (t0 + 2952);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t11 = (t0 + 2952);
    t12 = (t11 + 72U);
    t14 = *((char **)t12);
    t16 = (t0 + 3112);
    t17 = (t16 + 56U);
    t19 = *((char **)t17);
    xsi_vlog_generic_get_index_select_value(t18, 1, t5, t14, 2, t19, 3, 2);
    t20 = (t0 + 2632);
    xsi_vlogvar_wait_assign_value(t20, t18, 0, 0, 1, 0LL);
    xsi_set_current_line(96, ng0);
    t2 = (t0 + 3272);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t18, 0, 8);
    t11 = (t4 + 4);
    if (*((unsigned int *)t11) != 0)
        goto LAB40;

LAB39:    t12 = (t5 + 4);
    if (*((unsigned int *)t12) != 0)
        goto LAB40;

LAB43:    if (*((unsigned int *)t4) < *((unsigned int *)t5))
        goto LAB41;

LAB42:    t16 = (t18 + 4);
    t6 = *((unsigned int *)t16);
    t7 = (~(t6));
    t8 = *((unsigned int *)t18);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB44;

LAB45:    xsi_set_current_line(102, ng0);

LAB48:    xsi_set_current_line(103, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3272);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(104, ng0);
    t2 = (t0 + 3112);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng7)));
    memset(t18, 0, 8);
    t11 = (t4 + 4);
    if (*((unsigned int *)t11) != 0)
        goto LAB50;

LAB49:    t12 = (t5 + 4);
    if (*((unsigned int *)t12) != 0)
        goto LAB50;

LAB53:    if (*((unsigned int *)t4) < *((unsigned int *)t5))
        goto LAB51;

LAB52:    t16 = (t18 + 4);
    t6 = *((unsigned int *)t16);
    t7 = (~(t6));
    t8 = *((unsigned int *)t18);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB54;

LAB55:    xsi_set_current_line(110, ng0);

LAB58:    xsi_set_current_line(111, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3112);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(112, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 3592);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);

LAB56:
LAB46:    goto LAB21;

LAB17:    xsi_set_current_line(119, ng0);

LAB59:    xsi_set_current_line(120, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 2632);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(121, ng0);
    t2 = (t0 + 3272);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t18, 0, 8);
    t11 = (t4 + 4);
    if (*((unsigned int *)t11) != 0)
        goto LAB61;

LAB60:    t12 = (t5 + 4);
    if (*((unsigned int *)t12) != 0)
        goto LAB61;

LAB64:    if (*((unsigned int *)t4) < *((unsigned int *)t5))
        goto LAB62;

LAB63:    t16 = (t18 + 4);
    t6 = *((unsigned int *)t16);
    t7 = (~(t6));
    t8 = *((unsigned int *)t18);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB65;

LAB66:    xsi_set_current_line(126, ng0);

LAB69:    xsi_set_current_line(127, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3272);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(128, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2472);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(129, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2792);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(130, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3592);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);

LAB67:    goto LAB21;

LAB23:    xsi_set_current_line(68, ng0);

LAB26:    xsi_set_current_line(69, ng0);
    t4 = ((char*)((ng3)));
    t5 = (t0 + 2472);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(70, ng0);
    t2 = (t0 + 1912U);
    t3 = *((char **)t2);
    t2 = (t0 + 2952);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 8, 0LL);
    xsi_set_current_line(71, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3592);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    goto LAB25;

LAB29:    t14 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB31;

LAB30:    *((unsigned int *)t18) = 1;
    goto LAB31;

LAB33:    xsi_set_current_line(80, ng0);

LAB36:    xsi_set_current_line(81, ng0);
    t17 = (t0 + 3272);
    t19 = (t17 + 56U);
    t20 = *((char **)t19);
    t21 = ((char*)((ng3)));
    memset(t22, 0, 8);
    xsi_vlog_unsigned_add(t22, 32, t20, 4, t21, 32);
    t23 = (t0 + 3272);
    xsi_vlogvar_wait_assign_value(t23, t22, 0, 0, 4, 0LL);
    xsi_set_current_line(82, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3592);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    goto LAB35;

LAB40:    t14 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB42;

LAB41:    *((unsigned int *)t18) = 1;
    goto LAB42;

LAB44:    xsi_set_current_line(97, ng0);

LAB47:    xsi_set_current_line(98, ng0);
    t17 = (t0 + 3272);
    t19 = (t17 + 56U);
    t20 = *((char **)t19);
    t21 = ((char*)((ng3)));
    memset(t22, 0, 8);
    xsi_vlog_unsigned_add(t22, 32, t20, 4, t21, 32);
    t23 = (t0 + 3272);
    xsi_vlogvar_wait_assign_value(t23, t22, 0, 0, 4, 0LL);
    xsi_set_current_line(99, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3592);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    goto LAB46;

LAB50:    t14 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB52;

LAB51:    *((unsigned int *)t18) = 1;
    goto LAB52;

LAB54:    xsi_set_current_line(105, ng0);

LAB57:    xsi_set_current_line(106, ng0);
    t17 = (t0 + 3112);
    t19 = (t17 + 56U);
    t20 = *((char **)t19);
    t21 = ((char*)((ng3)));
    memset(t22, 0, 8);
    xsi_vlog_unsigned_add(t22, 32, t20, 3, t21, 32);
    t23 = (t0 + 3112);
    xsi_vlogvar_wait_assign_value(t23, t22, 0, 0, 3, 0LL);
    xsi_set_current_line(107, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3592);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    goto LAB56;

LAB61:    t14 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB63;

LAB62:    *((unsigned int *)t18) = 1;
    goto LAB63;

LAB65:    xsi_set_current_line(122, ng0);

LAB68:    xsi_set_current_line(123, ng0);
    t17 = (t0 + 3272);
    t19 = (t17 + 56U);
    t20 = *((char **)t19);
    t21 = ((char*)((ng3)));
    memset(t22, 0, 8);
    xsi_vlog_unsigned_add(t22, 32, t20, 4, t21, 32);
    t23 = (t0 + 3272);
    xsi_vlogvar_wait_assign_value(t23, t22, 0, 0, 4, 0LL);
    xsi_set_current_line(124, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 3592);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    goto LAB67;

}


extern void work_m_00000000002528454128_1778996657_init()
{
	static char *pe[] = {(void *)Always_47_0,(void *)Always_53_1};
	xsi_register_didat("work_m_00000000002528454128_1778996657", "isim/TOP_isim_beh.exe.sim/work/m_00000000002528454128_1778996657.didat");
	xsi_register_executes(pe);
}
