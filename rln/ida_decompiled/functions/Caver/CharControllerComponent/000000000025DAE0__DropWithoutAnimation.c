/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000025DAE0
 * Mangled: _ZN5Caver23CharControllerComponent20DropWithoutAnimationEv
 * Demangled: Caver::CharControllerComponent::DropWithoutAnimation(void)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001FDFE0  Caver::SceneObject::RemoveChildObject(Caver::SceneObject*,bool)
 *   0x00000000001FE5E0  Caver::SceneObject::HandleMessage(int,void *)
 *
 * Referenced strings: 13
 *   insn=0x000000000025DAEC string=0x000000000025DAF0 "h"
 *   insn=0x000000000025DAF4 string=0x000000000025DAF8 "`NA"
 *   insn=0x000000000025DAF8 string=0x000000000025DAFC "!"
 *   insn=0x000000000025DB04 string=0x000000000025DB08 "`"
 *   insn=0x000000000025DB08 string=0x000000000025DB0C "aNA"
 *   insn=0x000000000025DB10 string=0x000000000025DB14 "3"
 *   insn=0x000000000025DB14 string=0x000000000025DB18 "`NA"
 *   insn=0x000000000025DB14 string=0x00000000001FDFE0 "0'"
 *   insn=0x000000000025DB20 string=0x000000000025DB24 "@"
 *   insn=0x000000000025DB24 string=0x000000000025DB28 ""
 *   insn=0x000000000025DB28 string=0x000000000025DB2C ""
 *   insn=0x000000000025DB30 string=0x000000000025DB34 ""
 *   insn=0x000000000025DB34 string=0x000000000025DB38 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::CharControllerComponent::DropWithoutAnimation(__int64 this)
{
  __int64 v1; // x19
  int v2; // w8

  v1 = this;
  if ( *(_BYTE *)(this + 701) )
  {
    Caver::SceneObject::HandleMessage(*(Caver::SceneObject **)(this + 664), 17, 0);
    Caver::SceneObject::RemoveChildObject(*(Caver::SceneObject **)(v1 + 40), *(Caver::SceneObject **)(v1 + 664), 0);
    this = *(_QWORD *)(v1 + 664);
    *(_QWORD *)(v1 + 664) = 0;
    if ( this )
    {
      v2 = *(_DWORD *)(this + 8) - 1;
      *(_DWORD *)(this + 8) = v2;
      if ( !v2 )
        this = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)this + 8LL))(this);
    }
    *(_BYTE *)(v1 + 701) = 0;
    *(_DWORD *)(v1 + 720) = 0;
  }
  return this;
}

