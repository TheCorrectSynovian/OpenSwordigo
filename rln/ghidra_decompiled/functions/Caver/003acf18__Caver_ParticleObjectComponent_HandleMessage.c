/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003acf18
 * Function: Caver::ParticleObjectComponent::HandleMessage
 * Signature: undefined __thiscall HandleMessage(ParticleObjectComponent * this, int param_1, void * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ParticleObjectComponent::HandleMessage(int, void*) */

undefined8 __thiscall
Caver::ParticleObjectComponent::HandleMessage
          (ParticleObjectComponent *this,int param_1,void *param_2)

{
  float fVar1;
  
  if (param_1 == 7) {
    if (*(char *)(*(long *)param_2 + 0x17b) == '\0') {
      return 0;
    }
    if (*(char *)(*(long *)((long)param_2 + 8) + 0x17a) == '\0') {
      return 0;
    }
    fVar1 = *(float *)((long)param_2 + 0x2c);
    if (*(float *)((long)param_2 + 0x30) <
        *(float *)((long)param_2 + 0x28) * *(float *)(*(long *)(this + 0x28) + 0x68) +
        fVar1 * *(float *)(*(long *)(this + 0x28) + 0x6c)) {
      return 0;
    }
    if (((*(char *)(*(long *)param_2 + 0x17a) != '\0') && (fVar1 < -0.5)) &&
       (this[0xec] != (ParticleObjectComponent)0x0)) {
      return 0;
    }
    if ((fVar1 < DAT_0068493c) &&
       (*(long *)(*(long *)(*(long *)((long)param_2 + 8) + 0x28) + 0x30) != 0)) {
      return 0;
    }
    PhysicsObjectState::HandleGroundCollision((PhysicsObjectState *)(this + 0x88),param_2);
  }
  else if (param_1 != 6) {
    return 0;
  }
  *(undefined1 *)(*(long *)(this + 0x28) + 0xe8) = 1;
  return 0;
}


