/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003BF160
 * Mangled: _ZN5Caver7MapNode11HasPortalToERKSs
 * Demangled: Caver::MapNode::HasPortalTo(std::string const&)
 *
 * Callers: 2
 *   0x00000000001F8F60  Caver::MapNode::HasPortalTo(std::string const&)
 *   0x00000000003BEE30  Caver::MapNode::SaveToProtobufMessage(Caver::Proto::MapNode *)
 *
 * Callees: 1
 *   0x00000000001F5190  .memcmp
 *
 * Referenced strings: 4
 *   insn=0x00000000003BF178 string=0x00000000003BF17C "3"
 *   insn=0x00000000003BF17C string=0x00000000003BF180 "t"
 *   insn=0x00000000003BF184 string=0x00000000003BF188 ""
 *   insn=0x00000000003BF19C string=0x00000000001F5190 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::MapNode::HasPortalTo(__int64 a1, const void **a2)
{
  const void **v2; // x21
  const void **v3; // x22
  const void *v4; // x19
  size_t v5; // x20

  v2 = *(const void ***)(a1 + 48);
  v3 = *(const void ***)(a1 + 56);
  if ( v2 == v3 )
    return 0;
  v4 = *a2;
  v5 = *((_QWORD *)*a2 - 3);
  while ( *((_QWORD *)*v2 - 3) != v5 || memcmp(*v2, v4, v5) )
  {
    v2 += 3;
    if ( v3 == v2 )
      return 0;
  }
  return 1;
}

