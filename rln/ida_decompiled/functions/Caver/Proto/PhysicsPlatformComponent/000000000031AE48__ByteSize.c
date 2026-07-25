/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000031AE48
 * Mangled: _ZNK5Caver5Proto24PhysicsPlatformComponent8ByteSizeEv
 * Demangled: Caver::Proto::PhysicsPlatformComponent::ByteSize(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 9
 *   insn=0x000000000031AE4C string=0x000000000031AE50 "\t"
 *   insn=0x000000000031AE4C string=0x000000000031AE80 ""
 *   insn=0x000000000031AE54 string=0x000000000031AE58 ")"
 *   insn=0x000000000031AE5C string=0x000000000031AE60 "*"
 *   insn=0x000000000031AE60 string=0x000000000031AE64 ")"
 *   insn=0x000000000031AE68 string=0x000000000031AE6C "*"
 *   insn=0x000000000031AE6C string=0x000000000031AE70 ")"
 *   insn=0x000000000031AE70 string=0x000000000031AE74 "*"
 *   insn=0x000000000031AE78 string=0x000000000031AE7C "("
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::PhysicsPlatformComponent::ByteSize(Caver::Proto::PhysicsPlatformComponent *this)
{
  unsigned int v1; // w8
  int v2; // w9

  v1 = *((unsigned __int8 *)this + 28);
  if ( *((_BYTE *)this + 28) )
  {
    v2 = ((int)(v1 << 31) >> 31) & 5;
    if ( (v1 & 2) != 0 )
      v2 += 5;
    if ( (v1 & 4) != 0 )
      v2 += 5;
    if ( (v1 & 8) != 0 )
      v1 = v2 + 5;
    else
      v1 = v2;
  }
  *((_DWORD *)this + 2) = v1;
  return v1;
}

