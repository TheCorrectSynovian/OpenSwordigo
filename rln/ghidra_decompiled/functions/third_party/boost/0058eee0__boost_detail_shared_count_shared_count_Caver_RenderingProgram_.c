/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0058eee0
 * Function: boost::detail::shared_count::shared_count<Caver::RenderingProgram>
 * Signature: undefined __thiscall shared_count<Caver::RenderingProgram>(shared_count * this, RenderingProgram * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::detail::shared_count::shared_count<Caver::RenderingProgram>(Caver::RenderingProgram*) */

void __thiscall
boost::detail::shared_count::shared_count<Caver::RenderingProgram>
          (shared_count *this,RenderingProgram *param_1)

{
  undefined *puVar1;
  long *plVar2;
  
                    /* try { // try from 0058eee8 to 0068eeef has its CatchHandler @ 00592034 */
                    /* try { // try from 0058eef0 to 0068ef03 has its CatchHandler @ 00592030 */
  *(undefined8 *)this = 0;
  plVar2 = operator_new(0x20);
  puVar1 = PTR_vtable_007e4f80;
                    /* try { // try from 0058ef04 to 0068ef67 has its CatchHandler @ 00592534 */
  plVar2[3] = (long)param_1;
  plVar2[2] = 1;
  plVar2[1] = 1;
  *plVar2 = (long)(puVar1 + 0x10);
  *(long **)this = plVar2;
  return;
}


