/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004f8a74
 * Function: Caver::AttributePointsView::SetHelpText
 * Signature: undefined __cdecl SetHelpText(string * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::AttributePointsView::SetHelpText(std::string const&) */

void Caver::AttributePointsView::SetHelpText(string *param_1)

{
  float fVar1;
  
  FUN_0066a6a8(param_1 + 0x168);
  fVar1 = DAT_00683734;
  *(bool *)(*(long *)(param_1 + 0x158) + 0xe4) = *(long *)(*(long *)(param_1 + 0x168) + -0x18) == 0;
  if (fVar1 < *(float *)(param_1 + 0x8c)) {
                    /* WARNING: Could not recover jumptable at 0x004f8acc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)param_1 + 0x58))(param_1);
    return;
  }
  return;
}


