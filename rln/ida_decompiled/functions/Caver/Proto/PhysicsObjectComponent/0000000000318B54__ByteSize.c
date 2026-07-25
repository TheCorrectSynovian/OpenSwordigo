/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000318B54
 * Mangled: _ZNK5Caver5Proto22PhysicsObjectComponent8ByteSizeEv
 * Demangled: Caver::Proto::PhysicsObjectComponent::ByteSize(void)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F61D0  google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint)
 *   0x00000000001FCDD0  Caver::Proto::Vector2::ByteSize(void)
 *
 * Referenced strings: 22
 *   insn=0x0000000000318B64 string=0x0000000000318B68 "h2@"
 *   insn=0x0000000000318B78 string=0x0000000000318B7C "i"
 *   insn=0x0000000000318B7C string=0x0000000000318B80 "h\n@"
 *   insn=0x0000000000318B80 string=0x0000000000318B84 ")"
 *   insn=0x0000000000318B88 string=0x0000000000318B8C ")"
 *   insn=0x0000000000318B8C string=0x0000000000318B90 "("
 *   insn=0x0000000000318B98 string=0x00000000001FCDD0 "0'"
 *   insn=0x0000000000318BAC string=0x0000000000318BC0 "h2@"
 *   insn=0x0000000000318BB4 string=0x0000000000318C18 "`\n"
 *   insn=0x0000000000318BBC string=0x00000000001F61D0 "0'"
 *   insn=0x0000000000318BC4 string=0x0000000000318BC8 ")"
 *   insn=0x0000000000318BC8 string=0x0000000000318BCC "5"
 *   insn=0x0000000000318BDC string=0x0000000000318BE0 "*"
 *   insn=0x0000000000318BE0 string=0x0000000000318BE4 ")"
 *   insn=0x0000000000318BE8 string=0x0000000000318BEC "*"
 *   insn=0x0000000000318BEC string=0x0000000000318BF0 ")"
 *   insn=0x0000000000318BF4 string=0x0000000000318BF8 "*"
 *   insn=0x0000000000318BF8 string=0x0000000000318BFC ")"
 *   insn=0x0000000000318C00 string=0x0000000000318C04 "*\t"
 *   insn=0x0000000000318C04 string=0x0000000000318C08 ")"
 *   insn=0x0000000000318C08 string=0x0000000000318C0C "*"
 *   insn=0x0000000000318C10 string=0x0000000000318C14 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::PhysicsObjectComponent::ByteSize(Caver::Proto::PhysicsObjectComponent *this)
{
  int v2; // w8
  int v3; // w21
  Caver::Proto::PhysicsObjectComponent *v4; // x8
  unsigned int v5; // w1
  unsigned int v6; // w20
  int v7; // w0
  __int64 result; // x0
  unsigned int v9; // w9

  v2 = *((_DWORD *)this + 12);
  if ( (_BYTE)v2 )
  {
    v3 = 2 * (v2 & 1);
    if ( (v2 & 2) != 0 )
    {
      if ( *((_QWORD *)this + 2) )
        v4 = this;
      else
        v4 = (Caver::Proto::PhysicsObjectComponent *)Caver::Proto::PhysicsObjectComponent::default_instance_;
      v6 = Caver::Proto::Vector2::ByteSize(*((Caver::Proto::Vector2 **)v4 + 2));
      if ( v6 >= 0x80 )
        v7 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
               (google::protobuf::io::CodedOutputStream *)v6,
               v5);
      else
        v7 = 1;
      v2 = *((_DWORD *)this + 12);
      v3 = (v3 | 1) + v6 + v7;
    }
    v9 = v3 + 5;
    if ( (v2 & 4) == 0 )
      v9 = v3;
    if ( (v2 & 8) != 0 )
      v9 += 5;
    if ( (v2 & 0x10) != 0 )
      v9 += 5;
    if ( (v2 & 0x20) != 0 )
      v9 += 5;
    if ( (v2 & 0x40) != 0 )
      v9 += 2;
    if ( (v2 & 0x80) != 0 )
      result = v9 + 5;
    else
      result = v9;
  }
  else
  {
    result = 0;
  }
  *((_DWORD *)this + 2) = result;
  return result;
}

