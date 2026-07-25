/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003C3E38
 * Mangled: _ZN5Caver15StateProperties23LoadFromProtobufMessageERKNS_5Proto15StatePropertiesE
 * Demangled: Caver::StateProperties::LoadFromProtobufMessage(Caver::Proto::StateProperties const&)
 *
 * Callers: 1
 *   0x0000000000201D60  Caver::StateProperties::LoadFromProtobufMessage(Caver::Proto::StateProperties const&)
 *
 * Callees: 1
 *   0x00000000002003A0  std::set<std::string,std::less<std::string>,std::allocator<std::string>>::insert(std::string const&)
 *
 * Referenced strings: 6
 *   insn=0x00000000003C3E48 string=0x00000000003C3E4C "h"
 *   insn=0x00000000003C3E54 string=0x00000000003C3E58 "K"
 *   insn=0x00000000003C3E5C string=0x00000000003C3E60 "h\n@"
 *   insn=0x00000000003C3E68 string=0x00000000003C3E6C "M"
 *   insn=0x00000000003C3E6C string=0x00000000003C3E70 "h"
 *   insn=0x00000000003C3E78 string=0x00000000003C3E7C "+"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::StateProperties::LoadFromProtobufMessage(
        Caver::StateProperties *this,
        const Caver::Proto::StateProperties *a2)
{
  __int64 v3; // x21
  __int64 result; // x0

  if ( *((int *)a2 + 6) >= 1 )
  {
    v3 = 0;
    do
    {
      result = std::set<std::string>::insert();
      ++v3;
    }
    while ( v3 < *((int *)a2 + 6) );
  }
  return result;
}

