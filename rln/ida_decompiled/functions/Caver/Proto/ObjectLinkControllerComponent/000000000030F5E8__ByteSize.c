/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000030F5E8
 * Mangled: _ZNK5Caver5Proto29ObjectLinkControllerComponent8ByteSizeEv
 * Demangled: Caver::Proto::ObjectLinkControllerComponent::ByteSize(void)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F61D0  google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint)
 *   0x00000000001FE930  Caver::Proto::Vector3::ByteSize(void)
 *
 * Referenced strings: 45
 *   insn=0x000000000030F5F8 string=0x000000000030F5FC "i"
 *   insn=0x000000000030F604 string=0x000000000030F61C "t\n@"
 *   insn=0x000000000030F60C string=0x000000000030F610 "#"
 *   insn=0x000000000030F60C string=0x000000000030F65C "u"
 *   insn=0x000000000030F614 string=0x000000000030F618 "_"
 *   insn=0x000000000030F618 string=0x000000000030F794 "t\n"
 *   insn=0x000000000030F620 string=0x000000000030F624 ""
 *   insn=0x000000000030F628 string=0x000000000030F62C "b"
 *   insn=0x000000000030F630 string=0x000000000030F634 ""
 *   insn=0x000000000030F634 string=0x000000000030F650 "H"
 *   insn=0x000000000030F63C string=0x00000000001F61D0 "0'"
 *   insn=0x000000000030F640 string=0x000000000030F644 "i:@"
 *   insn=0x000000000030F648 string=0x000000000030F64C ""
 *   insn=0x000000000030F654 string=0x000000000030F658 ")"
 *   insn=0x000000000030F660 string=0x000000000030F664 ""
 *   insn=0x000000000030F668 string=0x000000000030F66C "b"
 *   insn=0x000000000030F670 string=0x000000000030F674 ""
 *   insn=0x000000000030F674 string=0x000000000030F690 "H"
 *   insn=0x000000000030F680 string=0x000000000030F684 "i:@"
 *   insn=0x000000000030F688 string=0x000000000030F68C ""
 *   insn=0x000000000030F6A0 string=0x000000000030F6A4 "I"
 *   insn=0x000000000030F6A4 string=0x000000000030F6A8 ";"
 *   insn=0x000000000030F6AC string=0x000000000030F6B0 "h"
 *   insn=0x000000000030F6B0 string=0x000000000030F6B4 ")"
 *   insn=0x000000000030F6B8 string=0x000000000030F6BC ")"
 *   insn=0x000000000030F6BC string=0x000000000030F6C0 "("
 *   insn=0x000000000030F6D0 string=0x000000000030F6D4 "b"
 *   insn=0x000000000030F6DC string=0x000000000030F6E8 "i:@"
 *   insn=0x000000000030F6EC string=0x000000000030F6F0 ""
 *   insn=0x000000000030F6F4 string=0x000000000030F6F8 "i"
 *   insn=0x000000000030F6FC string=0x000000000030F700 "h"
 *   insn=0x000000000030F700 string=0x000000000030F704 ")"
 *   insn=0x000000000030F708 string=0x000000000030F70C ")"
 *   insn=0x000000000030F70C string=0x000000000030F710 "("
 *   insn=0x000000000030F720 string=0x000000000030F724 "b"
 *   insn=0x000000000030F72C string=0x000000000030F738 "i:@"
 *   insn=0x000000000030F73C string=0x000000000030F740 ""
 *   insn=0x000000000030F744 string=0x000000000030F748 "i"
 *   insn=0x000000000030F74C string=0x000000000030F750 "h"
 *   insn=0x000000000030F750 string=0x000000000030F754 ")"
 *   insn=0x000000000030F758 string=0x000000000030F75C ")"
 *   insn=0x000000000030F75C string=0x000000000030F760 "("
 *   insn=0x000000000030F764 string=0x000000000030F768 "r"
 *   insn=0x000000000030F770 string=0x000000000030F774 "b"
 *   insn=0x000000000030F788 string=0x000000000030F78C ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::ObjectLinkControllerComponent::ByteSize(
        Caver::Proto::ObjectLinkControllerComponent *this,
        unsigned int a2)
{
  int v3; // w9
  unsigned int v4; // w20
  _QWORD *v5; // x20
  __int64 v6; // x8
  int v7; // w10
  int v8; // w0
  _QWORD *v9; // x21
  __int64 v10; // x8
  int v11; // w10
  int v12; // w0
  Caver::Proto::ObjectLinkControllerComponent *v13; // x8
  unsigned int v14; // w1
  unsigned int v15; // w21
  int v16; // w0
  Caver::Proto::ObjectLinkControllerComponent *v17; // x8
  unsigned int v18; // w1
  unsigned int v19; // w21
  int v20; // w0
  Caver::Proto::ObjectLinkControllerComponent *v21; // x8
  unsigned int v22; // w1
  unsigned int v23; // w21
  int v24; // w0

  LOBYTE(v3) = *((_BYTE *)this + 56);
  if ( !(_BYTE)v3 )
  {
    v4 = 0;
    goto LABEL_39;
  }
  if ( (*((_BYTE *)this + 56) & 1) == 0 )
  {
    v4 = 0;
    if ( (*((_BYTE *)this + 56) & 2) == 0 )
      goto LABEL_14;
    goto LABEL_10;
  }
  v5 = (_QWORD *)*((_QWORD *)this + 2);
  v6 = *(_QWORD *)(*v5 - 24LL);
  if ( (unsigned int)v6 >= 0x80 )
  {
    v8 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
           (google::protobuf::io::CodedOutputStream *)(unsigned int)v6,
           a2);
    v3 = *((_DWORD *)this + 14);
    v7 = v8;
    v6 = *(_QWORD *)(*v5 - 24LL);
  }
  else
  {
    v7 = 1;
  }
  v4 = v7 + v6 + 1;
  if ( (v3 & 2) != 0 )
  {
LABEL_10:
    v9 = (_QWORD *)*((_QWORD *)this + 3);
    v10 = *(_QWORD *)(*v9 - 24LL);
    if ( (unsigned int)v10 >= 0x80 )
    {
      v12 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
              (google::protobuf::io::CodedOutputStream *)(unsigned int)v10,
              a2);
      v3 = *((_DWORD *)this + 14);
      v11 = v12;
      v10 = *(_QWORD *)(*v9 - 24LL);
    }
    else
    {
      v11 = 1;
    }
    v4 += v11 + v10 + 1;
  }
LABEL_14:
  if ( (v3 & 4) != 0 )
  {
    if ( *((_QWORD *)this + 4) )
      v13 = this;
    else
      v13 = (Caver::Proto::ObjectLinkControllerComponent *)Caver::Proto::ObjectLinkControllerComponent::default_instance_;
    v15 = Caver::Proto::Vector3::ByteSize(*((Caver::Proto::Vector3 **)v13 + 4));
    if ( v15 >= 0x80 )
      v16 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
              (google::protobuf::io::CodedOutputStream *)v15,
              v14);
    else
      v16 = 1;
    v3 = *((_DWORD *)this + 14);
    v4 += v15 + v16 + 1;
    if ( (v3 & 8) == 0 )
    {
LABEL_16:
      if ( (v3 & 0x10) == 0 )
        goto LABEL_39;
      goto LABEL_32;
    }
  }
  else if ( (v3 & 8) == 0 )
  {
    goto LABEL_16;
  }
  if ( *((_QWORD *)this + 5) )
    v17 = this;
  else
    v17 = (Caver::Proto::ObjectLinkControllerComponent *)Caver::Proto::ObjectLinkControllerComponent::default_instance_;
  v19 = Caver::Proto::Vector3::ByteSize(*((Caver::Proto::Vector3 **)v17 + 5));
  if ( v19 >= 0x80 )
    v20 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
            (google::protobuf::io::CodedOutputStream *)v19,
            v18);
  else
    v20 = 1;
  v4 += v19 + v20 + 1;
  if ( (*((_DWORD *)this + 14) & 0x10) != 0 )
  {
LABEL_32:
    if ( *((_QWORD *)this + 6) )
      v21 = this;
    else
      v21 = (Caver::Proto::ObjectLinkControllerComponent *)Caver::Proto::ObjectLinkControllerComponent::default_instance_;
    v23 = Caver::Proto::Vector3::ByteSize(*((Caver::Proto::Vector3 **)v21 + 6));
    if ( v23 >= 0x80 )
      v24 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
              (google::protobuf::io::CodedOutputStream *)v23,
              v22);
    else
      v24 = 1;
    v4 += v23 + v24 + 1;
  }
LABEL_39:
  *((_DWORD *)this + 2) = v4;
  return v4;
}

