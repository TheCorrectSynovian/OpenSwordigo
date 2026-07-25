/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000030C788
 * Mangled: _ZNK5Caver5Proto23CollisionShapeComponent8ByteSizeEv
 * Demangled: Caver::Proto::CollisionShapeComponent::ByteSize(void)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F34D0  Caver::Proto::Program::ByteSize(void)
 *   0x00000000001F61D0  google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint)
 *
 * Referenced strings: 61
 *   insn=0x000000000030C798 string=0x000000000030C79C "hB@"
 *   insn=0x000000000030C7A0 string=0x000000000030C7A4 "`"
 *   insn=0x000000000030C7A4 string=0x000000000030C7A8 "\t"
 *   insn=0x000000000030C7AC string=0x000000000030C7B0 "*\t"
 *   insn=0x000000000030C7B0 string=0x000000000030C7B4 ")"
 *   insn=0x000000000030C7B8 string=0x000000000030C7BC "*\t"
 *   insn=0x000000000030C7BC string=0x000000000030C7C0 ")"
 *   insn=0x000000000030C7C4 string=0x000000000030C7C8 "*\t"
 *   insn=0x000000000030C7C8 string=0x000000000030C7CC ")"
 *   insn=0x000000000030C7D0 string=0x000000000030C7D4 "*\t"
 *   insn=0x000000000030C7D4 string=0x000000000030C7D8 ")"
 *   insn=0x000000000030C7DC string=0x000000000030C7E0 "*"
 *   insn=0x000000000030C7E0 string=0x000000000030C7E4 ")"
 *   insn=0x000000000030C7E4 string=0x000000000030C7E8 "*"
 *   insn=0x000000000030C7EC string=0x000000000030C7F0 "4"
 *   insn=0x000000000030C7F0 string=0x000000000030C7F4 ""
 *   insn=0x000000000030C7F4 string=0x000000000030C7F8 "`"
 *   insn=0x000000000030C7F8 string=0x000000000030C7FC " "
 *   insn=0x000000000030C7FC string=0x000000000030C820 "i"
 *   insn=0x000000000030C800 string=0x000000000030C804 """
 *   insn=0x000000000030C804 string=0x000000000030C828 "j"
 *   insn=0x000000000030C808 string=0x000000000030C80C "\n"
 *   insn=0x000000000030C80C string=0x000000000030C834 "4"
 *   insn=0x000000000030C814 string=0x000000000030C818 "A"
 *   insn=0x000000000030C818 string=0x000000000030C81C "M"
 *   insn=0x000000000030C81C string=0x000000000030C950 "t\n"
 *   insn=0x000000000030C828 string=0x000000000030C82C "hB@"
 *   insn=0x000000000030C828 string=0x00000000001F61D0 "0'"
 *   insn=0x000000000030C82C string=0x000000000030C830 "\t"
 *   insn=0x000000000030C848 string=0x000000000030C84C "*\t"
 *   insn=0x000000000030C850 string=0x000000000030C854 "4"
 *   insn=0x000000000030C85C string=0x000000000030C860 "H"
 *   insn=0x000000000030C860 string=0x000000000030C864 ";"
 *   insn=0x000000000030C868 string=0x000000000030C86C "h"
 *   insn=0x000000000030C86C string=0x000000000030C870 ")"
 *   insn=0x000000000030C874 string=0x000000000030C878 ")"
 *   insn=0x000000000030C878 string=0x000000000030C87C "("
 *   insn=0x000000000030C884 string=0x00000000001F34D0 "P'"
 *   insn=0x000000000030C88C string=0x000000000030C890 "b"
 *   insn=0x000000000030C898 string=0x000000000030C8A4 "hB@"
 *   insn=0x000000000030C89C string=0x000000000030C8A0 "L"
 *   insn=0x000000000030C8A8 string=0x000000000030C8AC ")"
 *   insn=0x000000000030C8AC string=0x000000000030C8B0 "4"
 *   insn=0x000000000030C8B0 string=0x000000000030C8B4 "h"
 *   insn=0x000000000030C8B8 string=0x000000000030C8BC "h"
 *   insn=0x000000000030C8BC string=0x000000000030C8C0 ")"
 *   insn=0x000000000030C8C4 string=0x000000000030C8C8 ")"
 *   insn=0x000000000030C8C8 string=0x000000000030C8CC "("
 *   insn=0x000000000030C8DC string=0x000000000030C8E0 "b"
 *   insn=0x000000000030C8E8 string=0x000000000030C8F4 "hB@"
 *   insn=0x000000000030C8EC string=0x000000000030C8F0 "8"
 *   insn=0x000000000030C8F8 string=0x000000000030C8FC ")"
 *   insn=0x000000000030C8FC string=0x000000000030C900 "4"
 *   insn=0x000000000030C900 string=0x000000000030C904 "h"
 *   insn=0x000000000030C908 string=0x000000000030C90C "h"
 *   insn=0x000000000030C90C string=0x000000000030C910 ")"
 *   insn=0x000000000030C914 string=0x000000000030C918 ")"
 *   insn=0x000000000030C918 string=0x000000000030C91C "("
 *   insn=0x000000000030C92C string=0x000000000030C930 "b"
 *   insn=0x000000000030C93C string=0x000000000030C940 "$"
 *   insn=0x000000000030C944 string=0x000000000030C948 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::CollisionShapeComponent::ByteSize(
        Caver::Proto::CollisionShapeComponent *this,
        unsigned int a2)
{
  int v3; // w8
  int v4; // w9
  unsigned int v5; // w20
  google::protobuf::io::CodedOutputStream *v6; // x0
  int v7; // w9
  int v8; // w0
  unsigned int v9; // w9
  Caver::Proto::CollisionShapeComponent *v10; // x8
  unsigned int v11; // w1
  unsigned int v12; // w21
  int v13; // w0
  Caver::Proto::CollisionShapeComponent *v14; // x8
  unsigned int v15; // w1
  unsigned int v16; // w21
  int v17; // w0
  Caver::Proto::CollisionShapeComponent *v18; // x8
  unsigned int v19; // w1
  unsigned int v20; // w21
  int v21; // w0

  v3 = *((_DWORD *)this + 16);
  if ( (_BYTE)v3 )
  {
    v4 = 2 * (v3 & 1);
    if ( (v3 & 2) != 0 )
      v4 += 2;
    if ( (v3 & 4) != 0 )
      v4 += 2;
    if ( (v3 & 8) != 0 )
      v4 += 2;
    if ( (v3 & 0x10) != 0 )
      v4 += 2;
    if ( (v3 & 0x20) != 0 )
      v4 += 5;
    if ( (v3 & 0x40) != 0 )
      v5 = v4 + 5;
    else
      v5 = v4;
    if ( (v3 & 0x80) != 0 )
    {
      v6 = (google::protobuf::io::CodedOutputStream *)*((unsigned int *)this + 7);
      if ( ((unsigned int)v6 & 0x80000000) != 0 )
      {
        v7 = 11;
      }
      else if ( (unsigned int)v6 >= 0x80 )
      {
        v8 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v6, a2);
        v3 = *((_DWORD *)this + 16);
        v7 = v8 + 1;
      }
      else
      {
        v7 = 2;
      }
      v5 += v7;
      if ( (v3 & 0xFF00) == 0 )
        goto LABEL_55;
      goto LABEL_25;
    }
  }
  else
  {
    v5 = 0;
  }
  if ( (v3 & 0xFF00) == 0 )
    goto LABEL_55;
LABEL_25:
  v9 = v5 + 5;
  if ( (v3 & 0x100) == 0 )
    v9 = v5;
  if ( (v3 & 0x200) != 0 )
    v5 = v9 + 2;
  else
    v5 = v9;
  if ( (v3 & 0x400) != 0 )
  {
    if ( *((_QWORD *)this + 5) )
      v10 = this;
    else
      v10 = (Caver::Proto::CollisionShapeComponent *)Caver::Proto::CollisionShapeComponent::default_instance_;
    v12 = Caver::Proto::Program::ByteSize(*((Caver::Proto::Program **)v10 + 5));
    if ( v12 >= 0x80 )
      v13 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
              (google::protobuf::io::CodedOutputStream *)v12,
              v11);
    else
      v13 = 1;
    v3 = *((_DWORD *)this + 16);
    v5 += v12 + v13 + 1;
    if ( (v3 & 0x800) == 0 )
    {
LABEL_32:
      if ( (v3 & 0x1000) == 0 )
        goto LABEL_55;
      goto LABEL_48;
    }
  }
  else if ( (v3 & 0x800) == 0 )
  {
    goto LABEL_32;
  }
  if ( *((_QWORD *)this + 6) )
    v14 = this;
  else
    v14 = (Caver::Proto::CollisionShapeComponent *)Caver::Proto::CollisionShapeComponent::default_instance_;
  v16 = Caver::Proto::Program::ByteSize(*((Caver::Proto::Program **)v14 + 6));
  if ( v16 >= 0x80 )
    v17 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
            (google::protobuf::io::CodedOutputStream *)v16,
            v15);
  else
    v17 = 1;
  v5 += v16 + v17 + 1;
  if ( (*((_DWORD *)this + 16) & 0x1000) != 0 )
  {
LABEL_48:
    if ( *((_QWORD *)this + 7) )
      v18 = this;
    else
      v18 = (Caver::Proto::CollisionShapeComponent *)Caver::Proto::CollisionShapeComponent::default_instance_;
    v20 = Caver::Proto::Program::ByteSize(*((Caver::Proto::Program **)v18 + 7));
    if ( v20 >= 0x80 )
      v21 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
              (google::protobuf::io::CodedOutputStream *)v20,
              v19);
    else
      v21 = 1;
    v5 += v20 + v21 + 1;
  }
LABEL_55:
  *((_DWORD *)this + 2) = v5;
  return v5;
}

