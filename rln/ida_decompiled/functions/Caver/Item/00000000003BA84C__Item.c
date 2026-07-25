/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003BA84C
 * Mangled: _ZN5Caver4ItemC2Ev
 * Demangled: Caver::Item::Item(void)
 *
 * Callers: 2
 *   0x0000000000200A50  Caver::Item::Item(void)
 *   0x00000000003BA46C  Caver::GuideTarget::LoadFromProtobufMessage(Caver::Proto::GuideTarget const&)
 *
 * Callees: 0
 *
 * Referenced strings: 2
 *   insn=0x00000000003BA84C string=0x00000000003BA850 ""
 *   insn=0x00000000003BA858 string=0x00000000003BA85C "a"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

int64x2_t __fastcall Caver::Item::Item(Caver::Item *this)
{
  int64x2_t result; // q0

  *((_BYTE *)this + 40) = 0;
  *((_DWORD *)this + 11) = 0;
  result = vdupq_n_s64((unsigned __int64)&byte_6FD2F8);
  *(int64x2_t *)((char *)this + 8) = result;
  *(int64x2_t *)((char *)this + 24) = result;
  return result;
}

