/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005bfce4
 * Function: std::pair<std::string_const,Caver::TargetAction<void(std::string_const&,bool,std::string_const&)>>::pair
 * Signature: undefined __thiscall pair(pair<std::string_const,Caver::TargetAction<void(std::string_const&,bool,std::string_const&)>> * this, pair * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* std::pair<std::string const, Caver::TargetAction<void (std::string const&, bool, std::string
   const&)> >::pair(std::pair<std::string const, Caver::TargetAction<void (std::string const&, bool,
   std::string const&)> > const&) */

void __thiscall
std::pair<std::string_const,Caver::TargetAction<void(std::string_const&,bool,std::string_const&)>>::
pair(pair<std::string_const,Caver::TargetAction<void(std::string_const&,bool,std::string_const&)>>
     *this,pair *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  
                    /* catch() { ... } // from try @ 005bfc04 with catch @ 005bfcec */
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  FUN_0066a528();
  *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
  lVar3 = *(long *)(param_1 + 0x10);
  *(long *)(this + 0x10) = lVar3;
  if (lVar3 != 0) {
                    /* catch() { ... } // from try @ 005bfbf0 with catch @ 005bfd2c */
    *(long *)(lVar3 + 0x10) = *(long *)(lVar3 + 0x10) + 1;
  }
  *(undefined8 *)(this + 0x18) = 0;
  uVar4 = *(ulong *)(param_1 + 0x18);
  if (uVar4 != 0) {
    *(ulong *)(this + 0x18) = uVar4;
    if ((uVar4 & 1) == 0) {
      (**(code **)(uVar4 & 0xfffffffffffffffe))(param_1 + 0x20,this + 0x20,0);
    }
    else {
      *(undefined8 *)(this + 0x30) = *(undefined8 *)(param_1 + 0x30);
      uVar5 = *(undefined8 *)(param_1 + 0x20);
      *(undefined8 *)(this + 0x28) = *(undefined8 *)(param_1 + 0x28);
      *(undefined8 *)(this + 0x20) = uVar5;
    }
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
                    /* catch() { ... } // from try @ 005bfbe8 with catch @ 005bfd90 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


