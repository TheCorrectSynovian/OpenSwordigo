/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000329404
 * Mangled: _ZNK5Caver5Proto33GenericMonsterControllerComponent3NewEv
 * Demangled: Caver::Proto::GenericMonsterControllerComponent::New(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F55E0  operator new(ulong)
 *
 * Referenced strings: 5
 *   insn=0x000000000032940C string=0x0000000000329410 "t0"
 *   insn=0x0000000000329410 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000329414 string=0x0000000000329418 ""
 *   insn=0x000000000032941C string=0x0000000000329420 "A"
 *   insn=0x0000000000329420 string=0x0000000000329424 "|"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::GenericMonsterControllerComponent::New(
        Caver::Proto::GenericMonsterControllerComponent *this)
{
  __int64 result; // x0

  result = operator new(0x18u);
  *(_DWORD *)(result + 16) = 0;
  *(_QWORD *)result = off_6C9090;
  *(_QWORD *)(result + 8) = 0;
  return result;
}

