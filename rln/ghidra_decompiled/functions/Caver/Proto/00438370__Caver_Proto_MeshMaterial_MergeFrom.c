/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00438370
 * Function: Caver::Proto::MeshMaterial::MergeFrom
 * Signature: undefined __thiscall MergeFrom(MeshMaterial * this, MeshMaterial * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::MeshMaterial::MergeFrom(Caver::Proto::MeshMaterial const&) */

void __thiscall Caver::Proto::MeshMaterial::MergeFrom(MeshMaterial *this,MeshMaterial *param_1)

{
  MeshMaterial *pMVar1;
  undefined4 uVar2;
  MeshMaterial MVar3;
  long lVar4;
  LogMessage *pLVar5;
  uint uVar6;
  FloatColor *pFVar7;
  Texture *this_00;
  LogFinisher aLStack_60 [8];
  LogMessage aLStack_58 [32];
  long local_38;
  
                    /* try { // try from 00438384 to 0053838f has its CatchHandler @ 004384bc */
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  if (param_1 == this) {
                    /* try { // try from 00438528 to 0053854f has its CatchHandler @ 00438558 */
    google::protobuf::internal::LogMessage::LogMessage
              (aLStack_58,3,"./../../../../Source/Caver/Content/Proto/Scene.pb.cc",0x67e7);
    pLVar5 = (LogMessage *)
             google::protobuf::internal::LogMessage::operator<<
                       (aLStack_58,"CHECK failed: (&from) != (this): ");
    google::protobuf::internal::LogFinisher::operator=(aLStack_60,pLVar5);
    google::protobuf::internal::LogMessage::~LogMessage(aLStack_58);
                    /* try { // try from 00438550 to 00538587 has its CatchHandler @ 004382d0 */
    MVar3 = param_1[0x38];
  }
  else {
    MVar3 = param_1[0x38];
  }
  if (MVar3 != (MeshMaterial)0x0) {
    uVar6 = (uint)(byte)MVar3;
    if (((byte)MVar3 & 1) != 0) {
                    /* try { // try from 004383b0 to 005383d7 has its CatchHandler @ 00438468 */
      pFVar7 = *(FloatColor **)(this + 0x10);
      *(uint *)(this + 0x38) = *(uint *)(this + 0x38) | 1;
      if (pFVar7 == (FloatColor *)0x0) {
        pFVar7 = operator_new(0x20);
        FloatColor::FloatColor(pFVar7);
        *(FloatColor **)(this + 0x10) = pFVar7;
      }
                    /* try { // try from 004383d8 to 0053848b has its CatchHandler @ 004382d0 */
      pMVar1 = *(MeshMaterial **)PTR_default_instance__007e6c30;
      if (*(long *)(param_1 + 0x10) != 0) {
        pMVar1 = param_1;
      }
      FloatColor::MergeFrom(pFVar7,*(FloatColor **)(pMVar1 + 0x10));
      uVar6 = *(uint *)(param_1 + 0x38);
    }
    if ((uVar6 >> 1 & 1) != 0) {
      pFVar7 = *(FloatColor **)(this + 0x18);
      *(uint *)(this + 0x38) = *(uint *)(this + 0x38) | 2;
      if (pFVar7 == (FloatColor *)0x0) {
        pFVar7 = operator_new(0x20);
        FloatColor::FloatColor(pFVar7);
        *(FloatColor **)(this + 0x18) = pFVar7;
      }
      pMVar1 = *(MeshMaterial **)PTR_default_instance__007e6c30;
      if (*(long *)(param_1 + 0x18) != 0) {
        pMVar1 = param_1;
      }
      FloatColor::MergeFrom(pFVar7,*(FloatColor **)(pMVar1 + 0x18));
      uVar6 = *(uint *)(param_1 + 0x38);
    }
    if ((uVar6 >> 2 & 1) != 0) {
      pFVar7 = *(FloatColor **)(this + 0x20);
      *(uint *)(this + 0x38) = *(uint *)(this + 0x38) | 4;
      if (pFVar7 == (FloatColor *)0x0) {
                    /* catch() { ... } // from try @ 004383b0 with catch @ 00438468 */
        pFVar7 = operator_new(0x20);
        FloatColor::FloatColor(pFVar7);
        *(FloatColor **)(this + 0x20) = pFVar7;
      }
                    /* try { // try from 0043848c to 005384b3 has its CatchHandler @ 004384b8 */
      pMVar1 = *(MeshMaterial **)PTR_default_instance__007e6c30;
      if (*(long *)(param_1 + 0x20) != 0) {
        pMVar1 = param_1;
      }
      FloatColor::MergeFrom(pFVar7,*(FloatColor **)(pMVar1 + 0x20));
      uVar6 = *(uint *)(param_1 + 0x38);
    }
    if ((uVar6 >> 3 & 1) != 0) {
      uVar2 = *(undefined4 *)(param_1 + 0x28);
      *(uint *)(this + 0x38) = *(uint *)(this + 0x38) | 8;
                    /* catch() { ... } // from try @ 0043848c with catch @ 004384b8 */
      *(undefined4 *)(this + 0x28) = uVar2;
                    /* catch() { ... } // from try @ 00438384 with catch @ 004384bc */
      uVar6 = *(uint *)(param_1 + 0x38);
    }
    if ((uVar6 >> 4 & 1) != 0) {
      this_00 = *(Texture **)(this + 0x30);
      *(uint *)(this + 0x38) = *(uint *)(this + 0x38) | 0x10;
      if (this_00 == (Texture *)0x0) {
        this_00 = operator_new(0x70);
                    /* try { // try from 004384e0 to 00538507 has its CatchHandler @ 00438564 */
        Texture::Texture(this_00);
        *(Texture **)(this + 0x30) = this_00;
      }
      pMVar1 = *(MeshMaterial **)PTR_default_instance__007e6c30;
      if (*(long *)(param_1 + 0x30) != 0) {
        pMVar1 = param_1;
      }
      Texture::MergeFrom(this_00,*(Texture **)(pMVar1 + 0x30));
    }
  }
                    /* catch() { ... } // from try @ 00438528 with catch @ 00438558 */
                    /* catch() { ... } // from try @ 004384e0 with catch @ 00438564 */
  if (*(long *)(lVar4 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


