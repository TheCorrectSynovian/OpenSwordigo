/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000247C48
 * Mangled: _ZN5Caver19ComponentOutletBase7ConnectEPKNS_9ComponentE
 * Demangled: Caver::ComponentOutletBase::Connect(Caver::Component const*)
 *
 * Callers: 1
 *   0x00000000001F7AE0  Caver::ComponentOutletBase::Connect(Caver::Component const*)
 *
 * Callees: 1
 *   0x00000000001F8520  Caver::SceneObject::ComponentWithIdentifier(int)
 *
 * Referenced strings: 8
 *   insn=0x0000000000247C58 string=0x0000000000247C5C "h"
 *   insn=0x0000000000247C60 string=0x0000000000247C64 ""
 *   insn=0x0000000000247C68 string=0x0000000000247C6C "@"
 *   insn=0x0000000000247C6C string=0x0000000000247C70 "h"
 *   insn=0x0000000000247C78 string=0x0000000000247C7C ""
 *   insn=0x0000000000247C90 string=0x0000000000247C94 "#"
 *   insn=0x0000000000247C94 string=0x00000000001F8520 "0'"
 *   insn=0x0000000000247CAC string=0x0000000000247CB0 "@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::ComponentOutletBase::Connect(Caver::ComponentOutletBase *this, const Caver::Component *a2)
{
  __int64 result; // x0
  Caver::SceneObject *v5; // x20
  __int64 v6; // x0
  __int64 (__fastcall *v7)(Caver::ComponentOutletBase *, __int64); // [xsp+8h] [xbp-18h]

  result = (*(__int64 (__fastcall **)(Caver::ComponentOutletBase *))(*(_QWORD *)this + 8LL))(this);
  if ( (_DWORD)result )
  {
    v5 = (Caver::SceneObject *)*((_QWORD *)a2 + 5);
    v7 = *(__int64 (__fastcall **)(Caver::ComponentOutletBase *, __int64))(*(_QWORD *)this + 32LL);
    (*(void (__fastcall **)(Caver::ComponentOutletBase *))(*(_QWORD *)this + 8LL))(this);
    Caver::SceneObject::ComponentWithIdentifier(v5);
    return v7(this, v6);
  }
  return result;
}

