/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000336B34
 * Mangled: _ZNK5Caver5Proto22MagicHookshotComponent8ByteSizeEv
 * Demangled: Caver::Proto::MagicHookshotComponent::ByteSize(void)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F61D0  google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint)
 *   0x00000000001F9DC0  Caver::Proto::FloatColor::ByteSize(void)
 *
 * Referenced strings: 57
 *   insn=0x0000000000336B44 string=0x0000000000336B48 "h"
 *   insn=0x0000000000336B48 string=0x0000000000336B4C "H"
 *   insn=0x0000000000336B4C string=0x0000000000336B50 "h"
 *   insn=0x0000000000336B50 string=0x0000000000336B7C "`"
 *   insn=0x0000000000336B54 string=0x0000000000336B58 "("
 *   insn=0x0000000000336B58 string=0x0000000000336B5C "`"
 *   insn=0x0000000000336B60 string=0x0000000000336B98 "i"
 *   insn=0x0000000000336B64 string=0x0000000000336B68 """
 *   insn=0x0000000000336B70 string=0x0000000000336BB8 "4"
 *   insn=0x0000000000336B74 string=0x0000000000336B78 "N"
 *   insn=0x0000000000336B78 string=0x0000000000336CB0 "t\n"
 *   insn=0x0000000000336B80 string=0x0000000000336BA0 "t"
 *   insn=0x0000000000336B88 string=0x0000000000336C28 "j"
 *   insn=0x0000000000336B8C string=0x0000000000336B90 "h"
 *   insn=0x0000000000336B90 string=0x0000000000336B94 "\n"
 *   insn=0x0000000000336B98 string=0x0000000000336B9C ""
 *   insn=0x0000000000336BAC string=0x0000000000336BB0 "h*@"
 *   insn=0x0000000000336BAC string=0x00000000001F61D0 "0'"
 *   insn=0x0000000000336BB0 string=0x0000000000336BB4 "\t"
 *   insn=0x0000000000336BBC string=0x0000000000336BC0 "H"
 *   insn=0x0000000000336BBC string=0x0000000000336BCC "`"
 *   insn=0x0000000000336BC0 string=0x0000000000336BC4 "("
 *   insn=0x0000000000336BC0 string=0x0000000000336BE8 "`"
 *   insn=0x0000000000336BC4 string=0x0000000000336BC8 ":"
 *   insn=0x0000000000336BD0 string=0x0000000000336C08 "i"
 *   insn=0x0000000000336BD4 string=0x0000000000336BD8 """
 *   insn=0x0000000000336BD8 string=0x0000000000336C3C "e"
 *   insn=0x0000000000336BDC string=0x0000000000336BE0 "4"
 *   insn=0x0000000000336BE0 string=0x0000000000336BE4 ""
 *   insn=0x0000000000336BE8 string=0x0000000000336BEC "`"
 *   insn=0x0000000000336BEC string=0x0000000000336C18 "i"
 *   insn=0x0000000000336BF4 string=0x0000000000336C54 "_"
 *   insn=0x0000000000336BF8 string=0x0000000000336BFC "4"
 *   insn=0x0000000000336BFC string=0x0000000000336C00 "H"
 *   insn=0x0000000000336C00 string=0x0000000000336C04 "+"
 *   insn=0x0000000000336C08 string=0x0000000000336C0C "4"
 *   insn=0x0000000000336C18 string=0x0000000000336C1C "4"
 *   insn=0x0000000000336C1C string=0x0000000000336C20 "H"
 *   insn=0x0000000000336C20 string=0x0000000000336C24 "#"
 *   insn=0x0000000000336C28 string=0x0000000000336C2C "h*@"
 *   insn=0x0000000000336C30 string=0x0000000000336C34 "H"
 *   insn=0x0000000000336C3C string=0x0000000000336C40 "h*@"
 *   insn=0x0000000000336C40 string=0x0000000000336C44 "\t"
 *   insn=0x0000000000336C44 string=0x0000000000336C48 "4"
 *   insn=0x0000000000336C54 string=0x0000000000336C58 "h*@"
 *   insn=0x0000000000336C58 string=0x0000000000336C5C "\t"
 *   insn=0x0000000000336C5C string=0x0000000000336C60 "4"
 *   insn=0x0000000000336C60 string=0x0000000000336C64 "h"
 *   insn=0x0000000000336C68 string=0x0000000000336C6C "h"
 *   insn=0x0000000000336C6C string=0x0000000000336C70 ")"
 *   insn=0x0000000000336C74 string=0x0000000000336C78 ")"
 *   insn=0x0000000000336C78 string=0x0000000000336C7C "("
 *   insn=0x0000000000336C80 string=0x0000000000336C84 "O"
 *   insn=0x0000000000336C84 string=0x00000000001F9DC0 "0'"
 *   insn=0x0000000000336C8C string=0x0000000000336C90 "b"
 *   insn=0x0000000000336C9C string=0x0000000000336CA0 "L"
 *   insn=0x0000000000336CA4 string=0x0000000000336CA8 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::MagicHookshotComponent::ByteSize(
        Caver::Proto::MagicHookshotComponent *this,
        unsigned int a2)
{
  int v3; // w8
  unsigned int v4; // w20
  google::protobuf::io::CodedOutputStream *v5; // x0
  int v6; // w9
  google::protobuf::io::CodedOutputStream *v7; // x0
  int v8; // w0
  google::protobuf::io::CodedOutputStream *v9; // x0
  google::protobuf::io::CodedOutputStream *v10; // x0
  int v11; // w0
  int v12; // w0
  Caver::Proto::MagicHookshotComponent *v13; // x8
  unsigned int v14; // w1
  unsigned int v15; // w21
  int v16; // w0

  LOBYTE(v3) = *((_BYTE *)this + 40);
  if ( !(_BYTE)v3 )
  {
    v4 = 0;
    goto LABEL_44;
  }
  if ( (*((_BYTE *)this + 40) & 1) != 0 )
  {
    v7 = (google::protobuf::io::CodedOutputStream *)*((unsigned int *)this + 3);
    if ( ((unsigned int)v7 & 0x80000000) != 0 )
    {
      v4 = 11;
      if ( (v3 & 2) == 0 )
        goto LABEL_17;
    }
    else if ( (unsigned int)v7 >= 0x80 )
    {
      v11 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v7, a2);
      v3 = *((_DWORD *)this + 10);
      v4 = v11 + 1;
      if ( (v3 & 2) == 0 )
        goto LABEL_17;
    }
    else
    {
      v4 = 2;
      if ( (v3 & 2) == 0 )
        goto LABEL_17;
    }
  }
  else
  {
    v4 = 0;
    if ( (*((_BYTE *)this + 40) & 2) == 0 )
      goto LABEL_17;
  }
  v5 = (google::protobuf::io::CodedOutputStream *)*((unsigned int *)this + 4);
  if ( ((unsigned int)v5 & 0x80000000) != 0 )
  {
    v6 = 11;
  }
  else if ( (unsigned int)v5 >= 0x80 )
  {
    v8 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v5, a2);
    v3 = *((_DWORD *)this + 10);
    v6 = v8 + 1;
  }
  else
  {
    v6 = 2;
  }
  v4 += v6;
LABEL_17:
  if ( (v3 & 4) == 0 )
  {
    if ( (v3 & 8) == 0 )
      goto LABEL_19;
LABEL_24:
    v10 = (google::protobuf::io::CodedOutputStream *)*((unsigned int *)this + 6);
    if ( ((unsigned int)v10 & 0x80000000) != 0 )
    {
      v4 += 11;
      if ( (v3 & 0x10) == 0 )
        goto LABEL_44;
    }
    else if ( (unsigned int)v10 >= 0x80 )
    {
      v4 += google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v10, a2) + 1;
      if ( (*((_DWORD *)this + 10) & 0x10) == 0 )
        goto LABEL_44;
    }
    else
    {
      v4 += 2;
      if ( (v3 & 0x10) == 0 )
        goto LABEL_44;
    }
    goto LABEL_37;
  }
  v9 = (google::protobuf::io::CodedOutputStream *)*((unsigned int *)this + 5);
  if ( ((unsigned int)v9 & 0x80000000) != 0 )
  {
    v4 += 11;
    if ( (v3 & 8) != 0 )
      goto LABEL_24;
  }
  else if ( (unsigned int)v9 >= 0x80 )
  {
    v12 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v9, a2);
    v3 = *((_DWORD *)this + 10);
    v4 += v12 + 1;
    if ( (v3 & 8) != 0 )
      goto LABEL_24;
  }
  else
  {
    v4 += 2;
    if ( (v3 & 8) != 0 )
      goto LABEL_24;
  }
LABEL_19:
  if ( (v3 & 0x10) == 0 )
    goto LABEL_44;
LABEL_37:
  if ( *((_QWORD *)this + 4) )
    v13 = this;
  else
    v13 = (Caver::Proto::MagicHookshotComponent *)Caver::Proto::MagicHookshotComponent::default_instance_;
  v15 = Caver::Proto::FloatColor::ByteSize(*((Caver::Proto::FloatColor **)v13 + 4));
  if ( v15 >= 0x80 )
    v16 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
            (google::protobuf::io::CodedOutputStream *)v15,
            v14);
  else
    v16 = 1;
  v4 += v15 + v16 + 1;
LABEL_44:
  *((_DWORD *)this + 2) = v4;
  return v4;
}

