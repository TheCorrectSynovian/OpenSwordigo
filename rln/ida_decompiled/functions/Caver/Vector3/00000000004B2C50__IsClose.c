/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004B2C50
 * Mangled: _ZNK5Caver7Vector37IsCloseERKS0_f
 * Demangled: Caver::Vector3::IsClose(Caver::Vector3 const&,float)
 *
 * Callers: 1
 *   0x00000000001F5F50  Caver::Vector3::IsClose(Caver::Vector3 const&,float)
 *
 * Callees: 0
 *
 * Referenced strings: 14
 *   insn=0x00000000004B2C50 string=0x00000000004B2C54 """
 *   insn=0x00000000004B2C54 string=0x00000000004B2C58 "!8""
 *   insn=0x00000000004B2C58 string=0x00000000004B2C5C "!"
 *   insn=0x00000000004B2C5C string=0x00000000004B2C60 "   "
 *   insn=0x00000000004B2C60 string=0x00000000004B2C64 "i"
 *   insn=0x00000000004B2C70 string=0x00000000004B2C74 """
 *   insn=0x00000000004B2C74 string=0x00000000004B2C78 "!8""
 *   insn=0x00000000004B2C78 string=0x00000000004B2C7C "!"
 *   insn=0x00000000004B2C7C string=0x00000000004B2C80 "   "
 *   insn=0x00000000004B2C80 string=0x00000000004B2C84 "i"
 *   insn=0x00000000004B2C90 string=0x00000000004B2C94 ""@"
 *   insn=0x00000000004B2C94 string=0x00000000004B2C98 "!8""
 *   insn=0x00000000004B2C98 string=0x00000000004B2C9C "!"
 *   insn=0x00000000004B2C9C string=0x00000000004B2CA0 "   "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall Caver::Vector3::IsClose(Caver::Vector3 *this, const Caver::Vector3 *a2, float a3)
{
  if ( fabsf(*(float *)this - *(float *)a2) > a3 )
    return 0;
  if ( fabsf(*((float *)this + 1) - *((float *)a2 + 1)) <= a3 )
    return fabsf(*((float *)this + 2) - *((float *)a2 + 2)) <= a3;
  return 0;
}

