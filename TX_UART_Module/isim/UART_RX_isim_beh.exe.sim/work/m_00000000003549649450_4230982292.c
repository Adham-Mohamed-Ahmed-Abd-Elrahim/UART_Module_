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
static const char *ng0 = "D:/Work Zone/FPGA/TX/TX_UART_Module/RX_MODULE.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {0U, 0U};
static unsigned int ng3[] = {1U, 0U};
static const char *ng4 = "START\n";
static int ng5[] = {1, 0};
static int ng6[] = {8, 0};
static unsigned int ng7[] = {2U, 0U};
static const char *ng8 = "READ\n";
static int ng9[] = {15, 0};
static unsigned int ng10[] = {3U, 0U};
static const char *ng11 = "STOP\n";



static void Initial_45_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(45, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2952);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 4);

LAB1:    return;
}

static void Initial_46_1(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(46, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3112);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 4);

LAB1:    return;
}

static void Initial_47_2(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(47, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2632);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);

LAB1:    return;
}

static void Always_49_3(char *t0)
{
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

LAB0:    t1 = (t0 + 5096U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 5664);
    *((int *)t2) = 1;
    t3 = (t0 + 5128);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(50, ng0);

LAB5:    xsi_set_current_line(51, ng0);
    t4 = (t0 + 1592U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(54, ng0);

LAB9:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 1912U);
    t3 = *((char **)t2);
    t2 = (t0 + 2792);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(56, ng0);
    t2 = (t0 + 3432);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3272);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 2, 0LL);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(52, ng0);
    t11 = ((char*)((ng2)));
    t12 = (t0 + 3272);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 2, 0LL);
    goto LAB8;

}

static void Always_60_4(char *t0)
{
    char t18[8];
    char t19[8];
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
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;
    char *t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    char *t56;
    char *t57;
    char *t58;

LAB0:    t1 = (t0 + 5344U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(60, ng0);
    t2 = (t0 + 5680);
    *((int *)t2) = 1;
    t3 = (t0 + 5376);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(61, ng0);

LAB5:    xsi_set_current_line(63, ng0);
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

LAB6:    xsi_set_current_line(64, ng0);

LAB9:    xsi_set_current_line(65, ng0);
    t11 = (t0 + 3272);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);

LAB10:    t14 = ((char*)((ng2)));
    t15 = xsi_vlog_unsigned_case_compare(t13, 2, t14, 2);
    if (t15 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng3)));
    t15 = xsi_vlog_unsigned_case_compare(t13, 2, t2, 2);
    if (t15 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng7)));
    t15 = xsi_vlog_unsigned_case_compare(t13, 2, t2, 2);
    if (t15 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng10)));
    t15 = xsi_vlog_unsigned_case_compare(t13, 2, t2, 2);
    if (t15 == 1)
        goto LAB17;

LAB18:
LAB20:
LAB19:    xsi_set_current_line(133, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3432);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);

LAB21:    goto LAB8;

LAB11:    xsi_set_current_line(66, ng0);

LAB22:    xsi_set_current_line(67, ng0);
    t16 = ((char*)((ng1)));
    t17 = (t0 + 3112);
    xsi_vlogvar_wait_assign_value(t17, t16, 0, 0, 4, 0LL);
    xsi_set_current_line(68, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2632);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(69, ng0);
    t2 = (t0 + 2792);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t19, 0, 8);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB23;

LAB24:    if (*((unsigned int *)t5) != 0)
        goto LAB25;

LAB26:    t12 = (t19 + 4);
    t20 = *((unsigned int *)t19);
    t21 = *((unsigned int *)t12);
    t22 = (t20 || t21);
    if (t22 > 0)
        goto LAB27;

LAB28:    t23 = *((unsigned int *)t19);
    t24 = (~(t23));
    t25 = *((unsigned int *)t12);
    t26 = (t24 || t25);
    if (t26 > 0)
        goto LAB29;

LAB30:    if (*((unsigned int *)t12) > 0)
        goto LAB31;

LAB32:    if (*((unsigned int *)t19) > 0)
        goto LAB33;

LAB34:    memcpy(t18, t16, 8);

LAB35:    t17 = (t0 + 3432);
    xsi_vlogvar_wait_assign_value(t17, t18, 0, 0, 2, 0LL);
    goto LAB21;

LAB13:    xsi_set_current_line(73, ng0);

LAB36:    xsi_set_current_line(74, ng0);
    xsi_vlogfile_write(1, 0, 0, ng4, 1, t0);
    xsi_set_current_line(75, ng0);
    t2 = (t0 + 3112);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t18, 0, 8);
    xsi_vlog_unsigned_add(t18, 32, t4, 4, t5, 32);
    t11 = (t0 + 3112);
    xsi_vlogvar_wait_assign_value(t11, t18, 0, 0, 4, 0LL);
    xsi_set_current_line(76, ng0);
    t2 = (t0 + 3112);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng6)));
    memset(t18, 0, 8);
    t11 = (t4 + 4);
    t12 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t5);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t20 = (t9 ^ t10);
    t21 = (t8 | t20);
    t22 = *((unsigned int *)t11);
    t23 = *((unsigned int *)t12);
    t24 = (t22 | t23);
    t25 = (~(t24));
    t26 = (t21 & t25);
    if (t26 != 0)
        goto LAB40;

LAB37:    if (t24 != 0)
        goto LAB39;

LAB38:    *((unsigned int *)t18) = 1;

LAB40:    t16 = (t18 + 4);
    t27 = *((unsigned int *)t16);
    t28 = (~(t27));
    t29 = *((unsigned int *)t18);
    t30 = (t29 & t28);
    t31 = (t30 != 0);
    if (t31 > 0)
        goto LAB41;

LAB42:    xsi_set_current_line(88, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3432);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);

LAB43:    goto LAB21;

LAB15:    xsi_set_current_line(95, ng0);

LAB54:    xsi_set_current_line(97, ng0);
    xsi_vlogfile_write(1, 0, 0, ng8, 1, t0);
    xsi_set_current_line(98, ng0);
    t2 = (t0 + 3112);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng9)));
    memset(t18, 0, 8);
    t11 = (t4 + 4);
    if (*((unsigned int *)t11) != 0)
        goto LAB56;

LAB55:    t12 = (t5 + 4);
    if (*((unsigned int *)t12) != 0)
        goto LAB56;

LAB59:    if (*((unsigned int *)t4) < *((unsigned int *)t5))
        goto LAB57;

LAB58:    t16 = (t18 + 4);
    t6 = *((unsigned int *)t16);
    t7 = (~(t6));
    t8 = *((unsigned int *)t18);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB60;

LAB61:    xsi_set_current_line(103, ng0);

LAB64:    xsi_set_current_line(104, ng0);
    t2 = (t0 + 2952);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng6)));
    memset(t18, 0, 8);
    t11 = (t4 + 4);
    if (*((unsigned int *)t11) != 0)
        goto LAB66;

LAB65:    t12 = (t5 + 4);
    if (*((unsigned int *)t12) != 0)
        goto LAB66;

LAB69:    if (*((unsigned int *)t4) < *((unsigned int *)t5))
        goto LAB67;

LAB68:    t16 = (t18 + 4);
    t6 = *((unsigned int *)t16);
    t7 = (~(t6));
    t8 = *((unsigned int *)t18);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB70;

LAB71:    xsi_set_current_line(110, ng0);

LAB76:    xsi_set_current_line(111, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 3432);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(112, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2952);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);

LAB72:
LAB62:    goto LAB21;

LAB17:    xsi_set_current_line(118, ng0);

LAB77:    xsi_set_current_line(119, ng0);
    xsi_vlogfile_write(1, 0, 0, ng11, 1, t0);
    xsi_set_current_line(120, ng0);
    t2 = (t0 + 3112);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng9)));
    memset(t18, 0, 8);
    t11 = (t4 + 4);
    if (*((unsigned int *)t11) != 0)
        goto LAB79;

LAB78:    t12 = (t5 + 4);
    if (*((unsigned int *)t12) != 0)
        goto LAB79;

LAB82:    if (*((unsigned int *)t4) < *((unsigned int *)t5))
        goto LAB80;

LAB81:    t16 = (t18 + 4);
    t6 = *((unsigned int *)t16);
    t7 = (~(t6));
    t8 = *((unsigned int *)t18);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB83;

LAB84:    xsi_set_current_line(125, ng0);

LAB87:    xsi_set_current_line(126, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3112);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(127, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2632);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(128, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3432);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);

LAB85:    goto LAB21;

LAB23:    *((unsigned int *)t19) = 1;
    goto LAB26;

LAB25:    t11 = (t19 + 4);
    *((unsigned int *)t19) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB26;

LAB27:    t14 = ((char*)((ng2)));
    goto LAB28;

LAB29:    t16 = ((char*)((ng3)));
    goto LAB30;

LAB31:    xsi_vlog_unsigned_bit_combine(t18, 2, t14, 2, t16, 2);
    goto LAB35;

LAB33:    memcpy(t18, t14, 8);
    goto LAB35;

LAB39:    t14 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB40;

LAB41:    xsi_set_current_line(77, ng0);

LAB44:    xsi_set_current_line(78, ng0);
    t17 = (t0 + 2792);
    t32 = (t17 + 56U);
    t33 = *((char **)t32);
    t34 = ((char*)((ng2)));
    memset(t19, 0, 8);
    t35 = (t33 + 4);
    t36 = (t34 + 4);
    t37 = *((unsigned int *)t33);
    t38 = *((unsigned int *)t34);
    t39 = (t37 ^ t38);
    t40 = *((unsigned int *)t35);
    t41 = *((unsigned int *)t36);
    t42 = (t40 ^ t41);
    t43 = (t39 | t42);
    t44 = *((unsigned int *)t35);
    t45 = *((unsigned int *)t36);
    t46 = (t44 | t45);
    t47 = (~(t46));
    t48 = (t43 & t47);
    if (t48 != 0)
        goto LAB48;

LAB45:    if (t46 != 0)
        goto LAB47;

LAB46:    *((unsigned int *)t19) = 1;

LAB48:    t50 = (t19 + 4);
    t51 = *((unsigned int *)t50);
    t52 = (~(t51));
    t53 = *((unsigned int *)t19);
    t54 = (t53 & t52);
    t55 = (t54 != 0);
    if (t55 > 0)
        goto LAB49;

LAB50:    xsi_set_current_line(83, ng0);

LAB53:    xsi_set_current_line(84, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3112);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(84, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3432);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);

LAB51:    goto LAB43;

LAB47:    t49 = (t19 + 4);
    *((unsigned int *)t19) = 1;
    *((unsigned int *)t49) = 1;
    goto LAB48;

LAB49:    xsi_set_current_line(79, ng0);

LAB52:    xsi_set_current_line(80, ng0);
    t56 = ((char*)((ng1)));
    t57 = (t0 + 2952);
    xsi_vlogvar_wait_assign_value(t57, t56, 0, 0, 4, 0LL);
    xsi_set_current_line(81, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 3432);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    goto LAB51;

LAB56:    t14 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB58;

LAB57:    *((unsigned int *)t18) = 1;
    goto LAB58;

LAB60:    xsi_set_current_line(99, ng0);

LAB63:    xsi_set_current_line(100, ng0);
    t17 = (t0 + 3112);
    t32 = (t17 + 56U);
    t33 = *((char **)t32);
    t34 = ((char*)((ng5)));
    memset(t19, 0, 8);
    xsi_vlog_unsigned_add(t19, 32, t33, 4, t34, 32);
    t35 = (t0 + 3112);
    xsi_vlogvar_wait_assign_value(t35, t19, 0, 0, 4, 0LL);
    xsi_set_current_line(101, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 3432);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    goto LAB62;

LAB66:    t14 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB68;

LAB67:    *((unsigned int *)t18) = 1;
    goto LAB68;

LAB70:    xsi_set_current_line(105, ng0);

LAB73:    xsi_set_current_line(106, ng0);
    t17 = (t0 + 2792);
    t32 = (t17 + 56U);
    t33 = *((char **)t32);
    t34 = (t0 + 2472);
    t35 = (t0 + 2472);
    t36 = (t35 + 72U);
    t49 = *((char **)t36);
    t50 = (t0 + 2952);
    t56 = (t50 + 56U);
    t57 = *((char **)t56);
    xsi_vlog_generic_convert_bit_index(t19, t49, 2, t57, 4, 2);
    t58 = (t19 + 4);
    t20 = *((unsigned int *)t58);
    t15 = (!(t20));
    if (t15 == 1)
        goto LAB74;

LAB75:    xsi_set_current_line(107, ng0);
    t2 = (t0 + 2952);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t18, 0, 8);
    xsi_vlog_unsigned_add(t18, 32, t4, 4, t5, 32);
    t11 = (t0 + 2952);
    xsi_vlogvar_wait_assign_value(t11, t18, 0, 0, 4, 0LL);
    xsi_set_current_line(108, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3112);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB72;

LAB74:    xsi_vlogvar_wait_assign_value(t34, t33, 0, *((unsigned int *)t19), 1, 0LL);
    goto LAB75;

LAB79:    t14 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB81;

LAB80:    *((unsigned int *)t18) = 1;
    goto LAB81;

LAB83:    xsi_set_current_line(121, ng0);

LAB86:    xsi_set_current_line(122, ng0);
    t17 = (t0 + 3112);
    t32 = (t17 + 56U);
    t33 = *((char **)t32);
    t34 = ((char*)((ng5)));
    memset(t19, 0, 8);
    xsi_vlog_unsigned_add(t19, 32, t33, 4, t34, 32);
    t35 = (t0 + 3112);
    xsi_vlogvar_wait_assign_value(t35, t19, 0, 0, 4, 0LL);
    xsi_set_current_line(123, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 3432);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    goto LAB85;

}


extern void work_m_00000000003549649450_4230982292_init()
{
	static char *pe[] = {(void *)Initial_45_0,(void *)Initial_46_1,(void *)Initial_47_2,(void *)Always_49_3,(void *)Always_60_4};
	xsi_register_didat("work_m_00000000003549649450_4230982292", "isim/UART_RX_isim_beh.exe.sim/work/m_00000000003549649450_4230982292.didat");
	xsi_register_executes(pe);
}
