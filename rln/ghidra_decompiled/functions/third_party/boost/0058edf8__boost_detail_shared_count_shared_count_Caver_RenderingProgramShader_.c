/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0058edf8
 * Function: boost::detail::shared_count::shared_count<Caver::RenderingProgramShader>
 * Signature: undefined __thiscall shared_count<Caver::RenderingProgramShader>(shared_count * this, RenderingProgramShader * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* boost::detail::shared_count::shared_count<Caver::RenderingProgramShader>(Caver::RenderingProgramShader*)
    */

void __thiscall
boost::detail::shared_count::shared_count<Caver::RenderingProgramShader>
          (shared_count *this,RenderingProgramShader *param_1)

{
  undefined *puVar1;
  long *plVar2;
  
                    /* try { // try from 0058edf8 to 0068ee0b has its CatchHandler @ 00592040 */
  *(undefined8 *)this = 0;
  plVar2 = operator_new(0x20);
  puVar1 = PTR_vtable_007e4970;
  plVar2[3] = (long)param_1;
                    /* try { // try from 0058ee2c to 0068ee37 has its CatchHandler @ 00591208 */
  plVar2[2] = 1;
  plVar2[1] = 1;
  *plVar2 = (long)(puVar1 + 0x10);
  *(long **)this = plVar2;
                    /* try { // try from 0058ee3c to 0068ee43 has its CatchHandler @ 0059203c */
                    /* try { // try from 0058ee44 to 0068ee57 has its CatchHandler @ 00592038 */
  return;
}


