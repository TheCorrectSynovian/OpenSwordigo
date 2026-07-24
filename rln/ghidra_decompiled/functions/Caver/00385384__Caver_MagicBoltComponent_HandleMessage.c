/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00385384
 * Function: Caver::MagicBoltComponent::HandleMessage
 * Signature: undefined __thiscall HandleMessage(MagicBoltComponent * this, int param_1, void * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MagicBoltComponent::HandleMessage(int, void*) */

void __thiscall
Caver::MagicBoltComponent::HandleMessage(MagicBoltComponent *this,int param_1,void *param_2)

{
  float fVar1;
  float fVar2;
  
  if (param_1 == 7) {
    if (*(char *)((long)param_2 + 0x34) == '\0') goto LAB_00385420;
    fVar2 = *(float *)((long)param_2 + 0x18);
    fVar1 = *(float *)((long)param_2 + 0x1c);
    if ((((fVar1 * fVar1 + fVar2 * fVar2 <= DAT_00683488) ||
         (*(char *)(*(long *)param_2 + 0x17b) == '\0')) ||
        (*(char *)(*(long *)((long)param_2 + 8) + 0x17a) == '\0')) ||
       (0.0 <= *(float *)((long)param_2 + 0x2c) * fVar1 + *(float *)((long)param_2 + 0x28) * fVar2))
    goto LAB_00385420;
  }
  else if ((param_1 != 0xd) || (*(char *)((long)param_2 + 0x24) != '\0')) goto LAB_00385420;
  Explode(this,true);
LAB_00385420:
  SpellComponent::HandleMessage((int)this,(void *)(ulong)(uint)param_1);
  return;
}


