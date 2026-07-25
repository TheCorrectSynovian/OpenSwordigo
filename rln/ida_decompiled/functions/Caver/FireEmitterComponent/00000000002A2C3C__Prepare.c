/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002A2C3C
 * Mangled: _ZN5Caver20FireEmitterComponent7PrepareEv
 * Demangled: Caver::FireEmitterComponent::Prepare(void)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F3BC0  Caver::FloatColor::GetHSLComponents(float *)
 *   0x00000000001F7AE0  Caver::ComponentOutletBase::Connect(Caver::Component const*)
 *
 * Referenced strings: 10
 *   insn=0x00000000002A2C48 string=0x00000000002A2C4C "`"
 *   insn=0x00000000002A2C4C string=0x00000000002A2C50 "aB"
 *   insn=0x00000000002A2C54 string=0x00000000002A2C58 "hN@"
 *   insn=0x00000000002A2C54 string=0x00000000001F3BC0 "P'"
 *   insn=0x00000000002A2C5C string=0x00000000002A2C60 "`""
 *   insn=0x00000000002A2C5C string=0x00000000002A2C74 "u@"
 *   insn=0x00000000002A2C68 string=0x00000000002A2C6C "hN@"
 *   insn=0x00000000002A2C68 string=0x00000000001F7AE0 "0'"
 *   insn=0x00000000002A2C6C string=0x00000000002A2C70 "h"
 *   insn=0x00000000002A2C74 string=0x00000000002A2C78 "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::FireEmitterComponent::Prepare(Caver::FireEmitterComponent *this)
{
  __int64 result; // x0
  __int64 v3; // x8

  result = Caver::FloatColor::GetHSLComponents((Caver::FireEmitterComponent *)((char *)this + 192), (float *)this + 52);
  v3 = *((_QWORD *)this + 19);
  if ( v3
    || (result = Caver::ComponentOutletBase::Connect((Caver::FireEmitterComponent *)((char *)this + 136), this),
        (v3 = *((_QWORD *)this + 19)) != 0) )
  {
    *((_DWORD *)this + 56) = *(_DWORD *)(v3 + 116);
  }
  return result;
}

