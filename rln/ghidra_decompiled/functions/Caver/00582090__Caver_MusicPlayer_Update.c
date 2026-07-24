/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00582090
 * Function: Caver::MusicPlayer::Update
 * Signature: undefined __thiscall Update(MusicPlayer * this, float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MusicPlayer::Update(float) */

void __thiscall Caver::MusicPlayer::Update(MusicPlayer *this,float param_1)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  float fVar4;
  undefined4 in_register_00005004;
  
  if (*(int *)(this + 0x20) < 0) {
                    /* try { // try from 005820e8 to 006820eb has its CatchHandler @ 00582b24 */
    fVar4 = *(float *)(this + 0x28) - *(float *)(this + 0x24) * param_1;
                    /* try { // try from 005820ec to 0068268f has its CatchHandler @ 00580d28 */
    *(float *)(this + 0x28) = fVar4;
    if (fVar4 < 0.0) {
      *(undefined4 *)(this + 0x20) = 0;
      uVar1 = DAT_00696750;
      if (*(long *)(this + 0x40) == 0) {
        *(undefined4 *)(this + 0x28) = 0;
      }
      else {
        if (this[0x50] == (MusicPlayer)0x0) {
          *(undefined4 *)(this + 0x28) = 0x3f800000;
        }
        else {
          *(undefined4 *)(this + 0x20) = 1;
          *(undefined8 *)(this + 0x24) = uVar1;
        }
        SetCurrentPlaylist(this,(shared_ptr *)(this + 0x40));
        plVar3 = *(long **)(this + 0x48);
        *(undefined8 *)(this + 0x40) = 0;
        *(undefined8 *)(this + 0x48) = 0;
        if ((plVar3 != (long *)0x0) && (lVar2 = plVar3[1], plVar3[1] = lVar2 + -1, lVar2 + -1 == 0))
        {
          (**(code **)(*plVar3 + 0x10))(plVar3);
          lVar2 = plVar3[2];
          plVar3[2] = lVar2 + -1;
          if (lVar2 + -1 == 0) {
            (**(code **)(*plVar3 + 0x18))(plVar3);
          }
        }
      }
    }
  }
  else {
    if (*(int *)(this + 0x20) == 0) goto LAB_00582194;
    fVar4 = *(float *)(this + 0x28) + *(float *)(this + 0x24) * param_1;
                    /* try { // try from 005820c4 to 006820c7 has its CatchHandler @ 00582a7c */
    *(float *)(this + 0x28) = fVar4;
    if (1.0 < fVar4) {
      *(undefined4 *)(this + 0x28) = 0x3f800000;
      *(undefined4 *)(this + 0x20) = 0;
    }
  }
  UpdatePlayerVolume(this);
LAB_00582194:
  if (*(long **)(this + 0x10) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x005821b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x10) + 0x18))(CONCAT44(in_register_00005004,param_1));
    return;
  }
  return;
}


