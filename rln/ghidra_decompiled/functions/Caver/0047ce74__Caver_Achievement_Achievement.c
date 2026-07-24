/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0047ce74
 * Function: Caver::Achievement::Achievement
 * Signature: undefined __thiscall Achievement(Achievement * this, string * param_1, string * param_2, string * param_3, int param_4, string * param_5, int param_6)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Achievement::Achievement(std::string const&, std::string const&, std::string const&, int,
   std::string const&, int) */

void __thiscall
Caver::Achievement::Achievement
          (Achievement *this,string *param_1,string *param_2,string *param_3,int param_4,
          string *param_5,int param_6)

{
  long lVar1;
  long lVar2;
  
                    /* try { // try from 0047ce78 to 0057ce83 has its CatchHandler @ 0047d348 */
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 0047cea4 to 0057cea7 has its CatchHandler @ 0047d238 */
  FUN_0066a528();
                    /* try { // try from 0047cec4 to 0057cecb has its CatchHandler @ 0047d318 */
  FUN_0066a528(this + 8,param_2);
  FUN_0066a528(this + 0x10,param_3);
  *(int *)(this + 0x18) = param_4;
  FUN_0066a528(this + 0x20,param_5);
  *(int *)(this + 0x28) = param_6;
                    /* try { // try from 0047ceec to 0057ceef has its CatchHandler @ 0047d234 */
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


