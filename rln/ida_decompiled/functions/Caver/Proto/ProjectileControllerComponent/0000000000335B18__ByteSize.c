/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000335B18
 * Mangled: _ZNK5Caver5Proto29ProjectileControllerComponent8ByteSizeEv
 * Demangled: Caver::Proto::ProjectileControllerComponent::ByteSize(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 4
 *   insn=0x0000000000335B18 string=0x0000000000335B1C "\t"
 *   insn=0x0000000000335B20 string=0x0000000000335B24 "*\t"
 *   insn=0x0000000000335B24 string=0x0000000000335B28 ")"
 *   insn=0x0000000000335B30 string=0x0000000000335B34 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::ProjectileControllerComponent::ByteSize(
        Caver::Proto::ProjectileControllerComponent *this)
{
  int v1; // w9
  unsigned int v2; // w8

  v1 = 2 * (*((_DWORD *)this + 4) & 1);
  if ( (*((_DWORD *)this + 4) & 2) != 0 )
    v1 += 2;
  if ( (unsigned __int8)*((_DWORD *)this + 4) )
    v2 = v1;
  else
    v2 = 0;
  *((_DWORD *)this + 2) = v2;
  return v2;
}

