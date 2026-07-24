/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00398d2c
 * Function: Caver::LeapingMonsterControllerComponent::Process
 * Signature: undefined __cdecl Process(vector * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::LeapingMonsterControllerComponent::Process(std::vector<boost::intrusive_ptr<Caver::Component>,
   std::allocator<boost::intrusive_ptr<Caver::Component> > >*) */

undefined8 Caver::LeapingMonsterControllerComponent::Process(vector *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0xe0);
  if (lVar1 == 0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)(param_1 + 0xd0),(Component *)param_1);
    lVar1 = *(long *)(param_1 + 0xe0);
    if (lVar1 == 0) {
      return 1;
    }
  }
  *(float *)(*(long *)(lVar1 + 0x90) + 0x30) =
       *(float *)(*(long *)(lVar1 + 0x90) + 0x30) * (*(float *)(param_1 + 200) / _DAT_0068782c);
  return 1;
}


