/*
 * Generated by Bluespec Compiler, version 2023.07-39-g15463f50 (build 15463f50)
 * 
 * On Thu Feb 22 18:09:07 CET 2024
 * 
 */
#include "bluesim_primitives.h"
#include "model_mkTest.h"

#include <cstdlib>
#include <time.h>
#include "bluesim_kernel_api.h"
#include "bs_vcd.h"
#include "bs_reset.h"


/* Constructor */
MODEL_mkTest::MODEL_mkTest()
{
  mkTest_instance = NULL;
}

/* Function for creating a new model */
void * new_MODEL_mkTest()
{
  MODEL_mkTest *model = new MODEL_mkTest();
  return (void *)(model);
}

/* Schedule functions */

static void schedule_posedge_CLK(tSimStateHdl simHdl, void *instance_ptr)
       {
	 MOD_mkTest &INST_top = *((MOD_mkTest *)(instance_ptr));
	 tUInt8 DEF_INST_top_DEF_ctr_fsm_7_ULT_16___d38;
	 tUInt8 DEF_INST_top_DEF_NOT_test_fsm_abort_whas_6_OR_NOT_test_fsm_abor_ETC___d42;
	 tUInt8 DEF_INST_top_DEF_test_fsm_abort_whas_AND_test_fsm_abort_wget_OR_ETC___d217;
	 tUInt8 DEF_INST_top_DEF_test_fsm_abort_whas_AND_test_fsm_abort_wget___d6;
	 tUInt8 DEF_INST_top_DEF_NOT_test_fsm_start_wire_whas_OR_NOT_test_fsm_s_ETC___d11;
	 tUInt8 DEF_INST_top_DEF_NOT_test_fsm_abort_whas_6_OR_NOT_test_fsm_abor_ETC___d28;
	 tUInt8 DEF_INST_top_DEF_test_fsm_abort_whas_AND_test_fsm_abort_wget_OR_ETC___d35;
	 tUInt8 DEF_INST_top_DEF_test_fsm_state_mkFSMstate_read__1_EQ_3___d34;
	 tUInt8 DEF_INST_top_DEF_going__h19625;
	 tUInt8 DEF_INST_top_DEF_test_fsm_start_reg__h19537;
	 tUInt8 DEF_INST_top_DEF_test_fsm_start_wire_wget____d9;
	 tUInt8 DEF_INST_top_DEF_test_fsm_start_wire_whas____d7;
	 tUInt8 DEF_INST_top_DEF_test_fsm_start_reg_1__h11507;
	 tUInt8 DEF_INST_top_DEF_test_fsm_abort_wget____d5;
	 tUInt8 DEF_INST_top_DEF_test_fsm_abort_whas____d4;
	 tUInt8 DEF_INST_top_DEF_test_fsm_state_fired__h11509;
	 tUInt8 DEF_INST_top_DEF_test_fsm_state_mkFSMstate_read____d31;
	 tUInt8 DEF_INST_top_DEF_CAN_FIRE_RL_test_fsm_start_reg__dreg_update;
	 tUInt8 DEF_INST_top_DEF_WILL_FIRE_RL_test_fsm_start_reg__dreg_update;
	 tUInt8 DEF_INST_top_DEF_CAN_FIRE_RL_test_fsm_state_handle_abort;
	 tUInt8 DEF_INST_top_DEF_WILL_FIRE_RL_test_fsm_state_handle_abort;
	 tUInt8 DEF_INST_top_DEF_CAN_FIRE_RL_test_fsm_state_fired__dreg_update;
	 tUInt8 DEF_INST_top_DEF_WILL_FIRE_RL_test_fsm_state_fired__dreg_update;
	 tUInt8 DEF_INST_top_DEF_CAN_FIRE_RL_test_fsm_state_every;
	 tUInt8 DEF_INST_top_DEF_WILL_FIRE_RL_test_fsm_state_every;
	 tUInt8 DEF_INST_top_DEF_CAN_FIRE_RL_test_fsm_restart;
	 tUInt8 DEF_INST_top_DEF_WILL_FIRE_RL_test_fsm_restart;
	 tUInt8 DEF_INST_top_DEF_CAN_FIRE_RL_test_fsm_action_l13c10;
	 tUInt8 DEF_INST_top_DEF_CAN_FIRE_RL_test_fsm_action_l17c13;
	 tUInt8 DEF_INST_top_DEF_CAN_FIRE_RL_test_fsm_action_l30c9;
	 tUInt8 DEF_INST_top_DEF_CAN_FIRE_RL_test_fsm_idle_l12c7;
	 tUInt8 DEF_INST_top_DEF_WILL_FIRE_RL_test_fsm_idle_l12c7;
	 tUInt8 DEF_INST_top_DEF_CAN_FIRE_RL_test_fsm_fsm_start;
	 tUInt8 DEF_INST_top_DEF_WILL_FIRE_RL_test_fsm_fsm_start;
	 tUInt8 DEF_INST_top_DEF_CAN_FIRE_RL_start;
	 tUInt8 DEF_INST_top_DEF_WILL_FIRE_RL_start;
	 tUInt8 DEF_INST_top_DEF_CAN_FIRE___me_check_5;
	 tUInt8 DEF_INST_top_DEF_WILL_FIRE___me_check_5;
	 tUInt8 DEF_INST_top_DEF_CAN_FIRE___me_check_6;
	 tUInt8 DEF_INST_top_DEF_WILL_FIRE___me_check_6;
	 DEF_INST_top_DEF_test_fsm_state_mkFSMstate_read____d31 = INST_top.INST_test_fsm_state_mkFSMstate.METH_read();
	 DEF_INST_top_DEF_test_fsm_state_fired__h11509 = INST_top.INST_test_fsm_state_fired.METH_read();
	 DEF_INST_top_DEF_test_fsm_abort_whas____d4 = INST_top.INST_test_fsm_abort.METH_whas();
	 DEF_INST_top_DEF_test_fsm_abort_wget____d5 = INST_top.INST_test_fsm_abort.METH_wget();
	 DEF_INST_top_DEF_test_fsm_start_reg_1__h11507 = INST_top.INST_test_fsm_start_reg_1.METH_read();
	 DEF_INST_top_DEF_test_fsm_start_reg__h19537 = INST_top.INST_test_fsm_start_reg.METH_read();
	 DEF_INST_top_DEF_going__h19625 = INST_top.INST_going.METH_read();
	 DEF_INST_top_DEF_test_fsm_state_mkFSMstate_read__1_EQ_3___d34 = DEF_INST_top_DEF_test_fsm_state_mkFSMstate_read____d31 == (tUInt8)3u;
	 DEF_INST_top_DEF_test_fsm_abort_whas_AND_test_fsm_abort_wget___d6 = DEF_INST_top_DEF_test_fsm_abort_whas____d4 && DEF_INST_top_DEF_test_fsm_abort_wget____d5;
	 DEF_INST_top_DEF_test_fsm_abort_whas_AND_test_fsm_abort_wget_OR_ETC___d35 = (DEF_INST_top_DEF_test_fsm_abort_whas_AND_test_fsm_abort_wget___d6 || DEF_INST_top_DEF_test_fsm_state_mkFSMstate_read____d31 == (tUInt8)0u) || DEF_INST_top_DEF_test_fsm_state_mkFSMstate_read__1_EQ_3___d34;
	 DEF_INST_top_DEF_test_fsm_abort_whas_AND_test_fsm_abort_wget_OR_ETC___d217 = DEF_INST_top_DEF_test_fsm_abort_whas_AND_test_fsm_abort_wget_OR_ETC___d35 && (!DEF_INST_top_DEF_test_fsm_start_reg_1__h11507 || DEF_INST_top_DEF_test_fsm_state_fired__h11509);
	 DEF_INST_top_DEF_CAN_FIRE_RL_start = (DEF_INST_top_DEF_test_fsm_abort_whas_AND_test_fsm_abort_wget_OR_ETC___d217 && !DEF_INST_top_DEF_test_fsm_start_reg__h19537) && !DEF_INST_top_DEF_going__h19625;
	 DEF_INST_top_DEF_WILL_FIRE_RL_start = DEF_INST_top_DEF_CAN_FIRE_RL_start;
	 INST_top.DEF_x__h13119 = INST_top.INST_ctr_fsm.METH_read();
	 DEF_INST_top_DEF_NOT_test_fsm_abort_whas_6_OR_NOT_test_fsm_abor_ETC___d28 = !DEF_INST_top_DEF_test_fsm_abort_whas____d4 || !DEF_INST_top_DEF_test_fsm_abort_wget____d5;
	 DEF_INST_top_DEF_NOT_test_fsm_abort_whas_6_OR_NOT_test_fsm_abor_ETC___d42 = DEF_INST_top_DEF_NOT_test_fsm_abort_whas_6_OR_NOT_test_fsm_abor_ETC___d28 && (DEF_INST_top_DEF_test_fsm_state_mkFSMstate_read____d31 == (tUInt8)1u || DEF_INST_top_DEF_test_fsm_state_mkFSMstate_read____d31 == (tUInt8)2u);
	 DEF_INST_top_DEF_ctr_fsm_7_ULT_16___d38 = (INST_top.DEF_x__h13119) < 16u;
	 DEF_INST_top_DEF_CAN_FIRE_RL_test_fsm_action_l17c13 = DEF_INST_top_DEF_ctr_fsm_7_ULT_16___d38 && DEF_INST_top_DEF_NOT_test_fsm_abort_whas_6_OR_NOT_test_fsm_abor_ETC___d42;
	 INST_top.DEF_WILL_FIRE_RL_test_fsm_action_l17c13 = DEF_INST_top_DEF_CAN_FIRE_RL_test_fsm_action_l17c13;
	 DEF_INST_top_DEF_CAN_FIRE_RL_test_fsm_action_l30c9 = !DEF_INST_top_DEF_ctr_fsm_7_ULT_16___d38 && DEF_INST_top_DEF_NOT_test_fsm_abort_whas_6_OR_NOT_test_fsm_abor_ETC___d42;
	 INST_top.DEF_WILL_FIRE_RL_test_fsm_action_l30c9 = DEF_INST_top_DEF_CAN_FIRE_RL_test_fsm_action_l30c9;
	 DEF_INST_top_DEF_CAN_FIRE_RL_test_fsm_fsm_start = DEF_INST_top_DEF_test_fsm_abort_whas_AND_test_fsm_abort_wget_OR_ETC___d217 && DEF_INST_top_DEF_test_fsm_start_reg__h19537;
	 DEF_INST_top_DEF_WILL_FIRE_RL_test_fsm_fsm_start = DEF_INST_top_DEF_CAN_FIRE_RL_test_fsm_fsm_start;
	 DEF_INST_top_DEF_CAN_FIRE_RL_test_fsm_restart = (DEF_INST_top_DEF_test_fsm_start_reg_1__h11507 && !DEF_INST_top_DEF_test_fsm_state_fired__h11509) && DEF_INST_top_DEF_NOT_test_fsm_abort_whas_6_OR_NOT_test_fsm_abor_ETC___d28;
	 DEF_INST_top_DEF_WILL_FIRE_RL_test_fsm_restart = DEF_INST_top_DEF_CAN_FIRE_RL_test_fsm_restart;
	 DEF_INST_top_DEF_CAN_FIRE_RL_test_fsm_start_reg__dreg_update = (tUInt8)1u;
	 DEF_INST_top_DEF_WILL_FIRE_RL_test_fsm_start_reg__dreg_update = DEF_INST_top_DEF_CAN_FIRE_RL_test_fsm_start_reg__dreg_update;
	 DEF_INST_top_DEF_CAN_FIRE_RL_test_fsm_state_every = (tUInt8)1u;
	 DEF_INST_top_DEF_WILL_FIRE_RL_test_fsm_state_every = DEF_INST_top_DEF_CAN_FIRE_RL_test_fsm_state_every;
	 DEF_INST_top_DEF_CAN_FIRE___me_check_5 = (tUInt8)1u;
	 DEF_INST_top_DEF_WILL_FIRE___me_check_5 = DEF_INST_top_DEF_CAN_FIRE___me_check_5;
	 DEF_INST_top_DEF_CAN_FIRE_RL_test_fsm_state_fired__dreg_update = (tUInt8)1u;
	 DEF_INST_top_DEF_WILL_FIRE_RL_test_fsm_state_fired__dreg_update = DEF_INST_top_DEF_CAN_FIRE_RL_test_fsm_state_fired__dreg_update;
	 DEF_INST_top_DEF_CAN_FIRE___me_check_6 = (tUInt8)1u;
	 DEF_INST_top_DEF_WILL_FIRE___me_check_6 = DEF_INST_top_DEF_CAN_FIRE___me_check_6;
	 if (DEF_INST_top_DEF_WILL_FIRE_RL_start)
	   INST_top.RL_start();
	 if (INST_top.DEF_WILL_FIRE_RL_test_fsm_action_l17c13)
	   INST_top.RL_test_fsm_action_l17c13();
	 if (INST_top.DEF_WILL_FIRE_RL_test_fsm_action_l30c9)
	   INST_top.RL_test_fsm_action_l30c9();
	 if (DEF_INST_top_DEF_WILL_FIRE_RL_test_fsm_restart)
	   INST_top.RL_test_fsm_restart();
	 if (DEF_INST_top_DEF_WILL_FIRE___me_check_6)
	   INST_top.__me_check_6();
	 if (DEF_INST_top_DEF_WILL_FIRE_RL_test_fsm_fsm_start)
	   INST_top.RL_test_fsm_fsm_start();
	 DEF_INST_top_DEF_test_fsm_start_wire_whas____d7 = INST_top.INST_test_fsm_start_wire.METH_whas();
	 DEF_INST_top_DEF_test_fsm_start_wire_wget____d9 = INST_top.INST_test_fsm_start_wire.METH_wget();
	 DEF_INST_top_DEF_CAN_FIRE_RL_test_fsm_action_l13c10 = ((DEF_INST_top_DEF_test_fsm_start_wire_whas____d7 && DEF_INST_top_DEF_test_fsm_start_wire_wget____d9) && DEF_INST_top_DEF_test_fsm_abort_whas_AND_test_fsm_abort_wget_OR_ETC___d35) && !(DEF_INST_top_DEF_CAN_FIRE_RL_test_fsm_action_l30c9 || DEF_INST_top_DEF_CAN_FIRE_RL_test_fsm_action_l17c13);
	 INST_top.DEF_WILL_FIRE_RL_test_fsm_action_l13c10 = DEF_INST_top_DEF_CAN_FIRE_RL_test_fsm_action_l13c10;
	 DEF_INST_top_DEF_NOT_test_fsm_start_wire_whas_OR_NOT_test_fsm_s_ETC___d11 = !DEF_INST_top_DEF_test_fsm_start_wire_whas____d7 || !DEF_INST_top_DEF_test_fsm_start_wire_wget____d9;
	 DEF_INST_top_DEF_CAN_FIRE_RL_test_fsm_idle_l12c7 = (DEF_INST_top_DEF_NOT_test_fsm_start_wire_whas_OR_NOT_test_fsm_s_ETC___d11 && (DEF_INST_top_DEF_NOT_test_fsm_abort_whas_6_OR_NOT_test_fsm_abor_ETC___d28 && DEF_INST_top_DEF_test_fsm_state_mkFSMstate_read__1_EQ_3___d34)) && !(DEF_INST_top_DEF_CAN_FIRE_RL_test_fsm_action_l30c9 || DEF_INST_top_DEF_CAN_FIRE_RL_test_fsm_action_l17c13);
	 DEF_INST_top_DEF_WILL_FIRE_RL_test_fsm_idle_l12c7 = DEF_INST_top_DEF_CAN_FIRE_RL_test_fsm_idle_l12c7;
	 DEF_INST_top_DEF_CAN_FIRE_RL_test_fsm_state_handle_abort = (DEF_INST_top_DEF_test_fsm_abort_whas_AND_test_fsm_abort_wget___d6 && DEF_INST_top_DEF_NOT_test_fsm_start_wire_whas_OR_NOT_test_fsm_s_ETC___d11) && !((DEF_INST_top_DEF_CAN_FIRE_RL_test_fsm_action_l30c9 || DEF_INST_top_DEF_CAN_FIRE_RL_test_fsm_action_l17c13) || DEF_INST_top_DEF_CAN_FIRE_RL_test_fsm_restart);
	 DEF_INST_top_DEF_WILL_FIRE_RL_test_fsm_state_handle_abort = DEF_INST_top_DEF_CAN_FIRE_RL_test_fsm_state_handle_abort;
	 if (INST_top.DEF_WILL_FIRE_RL_test_fsm_action_l13c10)
	   INST_top.RL_test_fsm_action_l13c10();
	 if (DEF_INST_top_DEF_WILL_FIRE_RL_test_fsm_start_reg__dreg_update)
	   INST_top.RL_test_fsm_start_reg__dreg_update();
	 if (DEF_INST_top_DEF_WILL_FIRE_RL_test_fsm_state_handle_abort)
	   INST_top.RL_test_fsm_state_handle_abort();
	 if (DEF_INST_top_DEF_WILL_FIRE___me_check_5)
	   INST_top.__me_check_5();
	 if (DEF_INST_top_DEF_WILL_FIRE_RL_test_fsm_idle_l12c7)
	   INST_top.RL_test_fsm_idle_l12c7();
	 if (DEF_INST_top_DEF_WILL_FIRE_RL_test_fsm_state_every)
	   INST_top.RL_test_fsm_state_every();
	 if (DEF_INST_top_DEF_WILL_FIRE_RL_test_fsm_state_fired__dreg_update)
	   INST_top.RL_test_fsm_state_fired__dreg_update();
	 INST_top.INST_test_fsm_state_fired_1.clk((tUInt8)1u, (tUInt8)1u);
	 INST_top.INST_test_fsm_state_overlap_pw.clk((tUInt8)1u, (tUInt8)1u);
	 INST_top.INST_test_fsm_state_set_pw.clk((tUInt8)1u, (tUInt8)1u);
	 INST_top.INST_test_fsm_abort.clk((tUInt8)1u, (tUInt8)1u);
	 INST_top.INST_test_fsm_start_reg_2.clk((tUInt8)1u, (tUInt8)1u);
	 INST_top.INST_test_fsm_start_wire.clk((tUInt8)1u, (tUInt8)1u);
	 if (do_reset_ticks(simHdl))
	 {
	   INST_top.INST_verbose.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_ctr_fsm.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_test_fsm_start_reg.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_test_fsm_start_reg_1.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_test_fsm_state_mkFSMstate.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_test_fsm_state_fired.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_test_fsm_state_can_overlap.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_going.rst_tick__clk__1((tUInt8)1u);
	 }
       };

/* Model creation/destruction functions */

void MODEL_mkTest::create_model(tSimStateHdl simHdl, bool master)
{
  sim_hdl = simHdl;
  init_reset_request_counters(sim_hdl);
  mkTest_instance = new MOD_mkTest(sim_hdl, "top", NULL);
  bk_get_or_define_clock(sim_hdl, "CLK");
  if (master)
  {
    bk_alter_clock(sim_hdl, bk_get_clock_by_name(sim_hdl, "CLK"), CLK_LOW, false, 0llu, 5llu, 5llu);
    bk_use_default_reset(sim_hdl);
  }
  bk_set_clock_event_fn(sim_hdl,
			bk_get_clock_by_name(sim_hdl, "CLK"),
			schedule_posedge_CLK,
			NULL,
			(tEdgeDirection)(POSEDGE));
  (mkTest_instance->INST_test_fsm_start_wire.set_clk_0)("CLK");
  (mkTest_instance->INST_test_fsm_start_reg_2.set_clk_0)("CLK");
  (mkTest_instance->INST_test_fsm_abort.set_clk_0)("CLK");
  (mkTest_instance->INST_test_fsm_state_set_pw.set_clk_0)("CLK");
  (mkTest_instance->INST_test_fsm_state_overlap_pw.set_clk_0)("CLK");
  (mkTest_instance->INST_test_fsm_state_fired_1.set_clk_0)("CLK");
  (mkTest_instance->set_clk_0)("CLK");
}
void MODEL_mkTest::destroy_model()
{
  delete mkTest_instance;
  mkTest_instance = NULL;
}
void MODEL_mkTest::reset_model(bool asserted)
{
  (mkTest_instance->reset_RST_N)(asserted ? (tUInt8)0u : (tUInt8)1u);
}
void * MODEL_mkTest::get_instance()
{
  return mkTest_instance;
}

/* Fill in version numbers */
void MODEL_mkTest::get_version(char const **name, char const **build)
{
  *name = "2023.07-39-g15463f50";
  *build = "15463f50";
}

/* Get the model creation time */
time_t MODEL_mkTest::get_creation_time()
{
  
  /* Thu Feb 22 17:09:07 UTC 2024 */
  return 1708621747llu;
}

/* State dumping function */
void MODEL_mkTest::dump_state()
{
  (mkTest_instance->dump_state)(0u);
}

/* VCD dumping functions */
MOD_mkTest & mkTest_backing(tSimStateHdl simHdl)
{
  static MOD_mkTest *instance = NULL;
  if (instance == NULL)
  {
    vcd_set_backing_instance(simHdl, true);
    instance = new MOD_mkTest(simHdl, "top", NULL);
    vcd_set_backing_instance(simHdl, false);
  }
  return *instance;
}
void MODEL_mkTest::dump_VCD_defs()
{
  (mkTest_instance->dump_VCD_defs)(vcd_depth(sim_hdl));
}
void MODEL_mkTest::dump_VCD(tVCDDumpType dt)
{
  (mkTest_instance->dump_VCD)(dt, vcd_depth(sim_hdl), mkTest_backing(sim_hdl));
}
