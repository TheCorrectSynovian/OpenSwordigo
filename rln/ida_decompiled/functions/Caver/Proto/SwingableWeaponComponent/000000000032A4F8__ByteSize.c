/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000032A4F8
 * Mangled: _ZNK5Caver5Proto24SwingableWeaponComponent8ByteSizeEv
 * Demangled: Caver::Proto::SwingableWeaponComponent::ByteSize(void)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F61D0  google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint)
 *   0x00000000001F9DC0  Caver::Proto::FloatColor::ByteSize(void)
 *
 * Referenced strings: 86
 *   insn=0x000000000032A508 string=0x000000000032A50C "hF@"
 *   insn=0x000000000032A510 string=0x000000000032A514 "@"
 *   insn=0x000000000032A518 string=0x000000000032A54C "`"
 *   insn=0x000000000032A520 string=0x000000000032A524 "`"
 *   insn=0x000000000032A524 string=0x000000000032A528 " "
 *   insn=0x000000000032A528 string=0x000000000032A56C "@"
 *   insn=0x000000000032A544 string=0x000000000032A664 "h"
 *   insn=0x000000000032A548 string=0x000000000032A758 "t\n"
 *   insn=0x000000000032A54C string=0x000000000032A550 " "
 *   insn=0x000000000032A550 string=0x000000000032A574 "@"
 *   insn=0x000000000032A560 string=0x000000000032A564 ""
 *   insn=0x000000000032A564 string=0x000000000032A568 ""
 *   insn=0x000000000032A56C string=0x000000000032A570 ""
 *   insn=0x000000000032A578 string=0x000000000032A57C "H"
 *   insn=0x000000000032A584 string=0x000000000032A588 "hF@"
 *   insn=0x000000000032A584 string=0x00000000001F61D0 "0'"
 *   insn=0x000000000032A58C string=0x000000000032A590 "4"
 *   insn=0x000000000032A5A0 string=0x000000000032A5A4 "*"
 *   insn=0x000000000032A5A4 string=0x000000000032A5A8 ")"
 *   insn=0x000000000032A5A8 string=0x000000000032A5AC "*"
 *   insn=0x000000000032A5B0 string=0x000000000032A5B4 "5"
 *   insn=0x000000000032A5BC string=0x000000000032A5C0 "h"
 *   insn=0x000000000032A5C0 string=0x000000000032A5C4 ")"
 *   insn=0x000000000032A5C8 string=0x000000000032A5CC ")"
 *   insn=0x000000000032A5CC string=0x000000000032A5D0 "("
 *   insn=0x000000000032A5D8 string=0x00000000001F9DC0 "0'"
 *   insn=0x000000000032A5E0 string=0x000000000032A5E4 "b"
 *   insn=0x000000000032A5EC string=0x000000000032A5F8 "hF@"
 *   insn=0x000000000032A5FC string=0x000000000032A600 ")"
 *   insn=0x000000000032A600 string=0x000000000032A604 "5"
 *   insn=0x000000000032A610 string=0x000000000032A614 "H"
 *   insn=0x000000000032A614 string=0x000000000032A618 "`.@"
 *   insn=0x000000000032A61C string=0x000000000032A630 "i"
 *   insn=0x000000000032A620 string=0x000000000032A624 "B"
 *   insn=0x000000000032A628 string=0x000000000032A62C ""
 *   insn=0x000000000032A62C string=0x000000000032A658 "4"
 *   insn=0x000000000032A630 string=0x000000000032A634 "\t"
 *   insn=0x000000000032A638 string=0x000000000032A63C "hF@"
 *   insn=0x000000000032A640 string=0x000000000032A644 ""
 *   insn=0x000000000032A64C string=0x000000000032A650 "hF@"
 *   insn=0x000000000032A650 string=0x000000000032A654 "\t"
 *   insn=0x000000000032A664 string=0x000000000032A668 "("
 *   insn=0x000000000032A664 string=0x000000000032A690 "`2@"
 *   insn=0x000000000032A668 string=0x000000000032A6AC "`6@"
 *   insn=0x000000000032A66C string=0x000000000032A6C8 "`:@"
 *   insn=0x000000000032A670 string=0x000000000032A674 "(`6`B@"
 *   insn=0x000000000032A670 string=0x000000000032A6E4 "`>@"
 *   insn=0x000000000032A674 string=0x000000000032A678 "`B@"
 *   insn=0x000000000032A678 string=0x000000000032A67C "@"
 *   insn=0x000000000032A67C string=0x000000000032A704 "h"
 *   insn=0x000000000032A680 string=0x000000000032A684 "B"
 *   insn=0x000000000032A688 string=0x000000000032A68C "2"
 *   insn=0x000000000032A694 string=0x000000000032A70C "i"
 *   insn=0x000000000032A6A0 string=0x000000000032A6A4 "4"
 *   insn=0x000000000032A6A4 string=0x000000000032A6A8 "("
 *   insn=0x000000000032A6AC string=0x000000000032A6B0 "`"
 *   insn=0x000000000032A6B0 string=0x000000000032A71C "i"
 *   insn=0x000000000032A6BC string=0x000000000032A6C0 "4"
 *   insn=0x000000000032A6C0 string=0x000000000032A6C4 "h"
 *   insn=0x000000000032A6CC string=0x000000000032A72C "i"
 *   insn=0x000000000032A6D0 string=0x000000000032A6D4 "b"
 *   insn=0x000000000032A6D8 string=0x000000000032A6DC "4"
 *   insn=0x000000000032A6E8 string=0x000000000032A73C "i"
 *   insn=0x000000000032A6EC string=0x000000000032A6F0 "B"
 *   insn=0x000000000032A6F4 string=0x000000000032A6F8 "4"
 *   insn=0x000000000032A70C string=0x000000000032A710 "4"
 *   insn=0x000000000032A71C string=0x000000000032A720 "4"
 *   insn=0x000000000032A720 string=0x000000000032A724 "h"
 *   insn=0x000000000032A72C string=0x000000000032A730 "4"
 *   insn=0x000000000032A730 string=0x000000000032A734 ""
 *   insn=0x000000000032A73C string=0x000000000032A740 "4"
 *   insn=0x000000000032A74C string=0x000000000032A750 ""
 *   insn=0x000000000032A770 string=0x000000000032A774 "hF@"
 *   insn=0x000000000032A774 string=0x000000000032A778 "\t"
 *   insn=0x000000000032A778 string=0x000000000032A77C "4"
 *   insn=0x000000000032A77C string=0x000000000032A780 "h"
 *   insn=0x000000000032A788 string=0x000000000032A78C "hF@"
 *   insn=0x000000000032A78C string=0x000000000032A790 "\t"
 *   insn=0x000000000032A790 string=0x000000000032A794 "4"
 *   insn=0x000000000032A7A0 string=0x000000000032A7A4 "hF@"
 *   insn=0x000000000032A7A4 string=0x000000000032A7A8 "\t"
 *   insn=0x000000000032A7A8 string=0x000000000032A7AC "4"
 *   insn=0x000000000032A7AC string=0x000000000032A7B0 "("
 *   insn=0x000000000032A7B8 string=0x000000000032A7BC "hF@"
 *   insn=0x000000000032A7BC string=0x000000000032A7C0 "\t"
 *   insn=0x000000000032A7C0 string=0x000000000032A7C4 "4"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::SwingableWeaponComponent::ByteSize(
        Caver::Proto::SwingableWeaponComponent *this,
        unsigned int a2)
{
  int v3; // w8
  int v4; // w20
  google::protobuf::io::CodedOutputStream *v5; // x0
  int v6; // w0
  unsigned int v7; // w20
  google::protobuf::io::CodedOutputStream *v8; // x0
  int v9; // w9
  int v10; // w21
  Caver::Proto::SwingableWeaponComponent *v11; // x8
  unsigned int v12; // w20
  int v13; // w0
  google::protobuf::io::CodedOutputStream *v14; // x0
  int v15; // w9
  int v16; // w0
  int v17; // w0
  google::protobuf::io::CodedOutputStream *v18; // x0
  int v19; // w8
  google::protobuf::io::CodedOutputStream *v20; // x0
  google::protobuf::io::CodedOutputStream *v21; // x0
  google::protobuf::io::CodedOutputStream *v22; // x0
  google::protobuf::io::CodedOutputStream *v23; // x0
  int v25; // w0
  int v26; // w0
  int v27; // w0

  v3 = *((_DWORD *)this + 17);
  if ( !(_BYTE)v3 )
  {
    v7 = 0;
    if ( (v3 & 0xFF00) == 0 )
      goto LABEL_78;
LABEL_46:
    if ( (v3 & 0x100) == 0 )
    {
      if ( (v3 & 0x200) == 0 )
        goto LABEL_48;
LABEL_57:
      v21 = (google::protobuf::io::CodedOutputStream *)*((unsigned int *)this + 13);
      if ( ((unsigned int)v21 & 0x80000000) != 0 )
      {
        v7 += 11;
        if ( (v3 & 0x400) != 0 )
          goto LABEL_60;
      }
      else if ( (unsigned int)v21 >= 0x80 )
      {
        v26 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v21, a2);
        v3 = *((_DWORD *)this + 17);
        v7 += v26 + 1;
        if ( (v3 & 0x400) != 0 )
          goto LABEL_60;
      }
      else
      {
        v7 += 2;
        if ( (v3 & 0x400) != 0 )
          goto LABEL_60;
      }
LABEL_49:
      if ( (v3 & 0x800) == 0 )
        goto LABEL_50;
LABEL_63:
      v23 = (google::protobuf::io::CodedOutputStream *)*((unsigned int *)this + 15);
      if ( ((unsigned int)v23 & 0x80000000) != 0 )
      {
        v7 += 11;
        if ( (v3 & 0x1000) == 0 )
          goto LABEL_78;
      }
      else if ( (unsigned int)v23 >= 0x80 )
      {
        v7 += google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v23, a2) + 1;
        if ( (*((_DWORD *)this + 17) & 0x1000) == 0 )
          goto LABEL_78;
      }
      else
      {
        v7 += 2;
        if ( (v3 & 0x1000) == 0 )
          goto LABEL_78;
      }
LABEL_51:
      v18 = (google::protobuf::io::CodedOutputStream *)*((unsigned int *)this + 16);
      if ( ((unsigned int)v18 & 0x80000000) != 0 )
      {
        v19 = 11;
      }
      else if ( (unsigned int)v18 >= 0x80 )
      {
        v19 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v18, a2) + 1;
      }
      else
      {
        v19 = 2;
      }
      v7 += v19;
      goto LABEL_78;
    }
    v20 = (google::protobuf::io::CodedOutputStream *)*((unsigned int *)this + 12);
    if ( ((unsigned int)v20 & 0x80000000) != 0 )
    {
      v7 += 11;
      if ( (v3 & 0x200) != 0 )
        goto LABEL_57;
    }
    else if ( (unsigned int)v20 >= 0x80 )
    {
      v25 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v20, a2);
      v3 = *((_DWORD *)this + 17);
      v7 += v25 + 1;
      if ( (v3 & 0x200) != 0 )
        goto LABEL_57;
    }
    else
    {
      v7 += 2;
      if ( (v3 & 0x200) != 0 )
        goto LABEL_57;
    }
LABEL_48:
    if ( (v3 & 0x400) == 0 )
      goto LABEL_49;
LABEL_60:
    v22 = (google::protobuf::io::CodedOutputStream *)*((unsigned int *)this + 14);
    if ( ((unsigned int)v22 & 0x80000000) != 0 )
    {
      v7 += 11;
      if ( (v3 & 0x800) != 0 )
        goto LABEL_63;
    }
    else if ( (unsigned int)v22 >= 0x80 )
    {
      v27 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v22, a2);
      v3 = *((_DWORD *)this + 17);
      v7 += v27 + 1;
      if ( (v3 & 0x800) != 0 )
        goto LABEL_63;
    }
    else
    {
      v7 += 2;
      if ( (v3 & 0x800) != 0 )
        goto LABEL_63;
    }
LABEL_50:
    if ( (v3 & 0x1000) == 0 )
      goto LABEL_78;
    goto LABEL_51;
  }
  if ( (v3 & 1) != 0 )
  {
    v8 = (google::protobuf::io::CodedOutputStream *)*((unsigned int *)this + 3);
    if ( ((unsigned int)v8 & 0x80000000) != 0 )
    {
      v4 = 11;
      if ( (v3 & 2) == 0 )
        goto LABEL_18;
    }
    else if ( (unsigned int)v8 >= 0x80 )
    {
      v16 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v8, a2);
      v3 = *((_DWORD *)this + 17);
      v4 = v16 + 1;
      if ( (v3 & 2) == 0 )
        goto LABEL_18;
    }
    else
    {
      v4 = 2;
      if ( (v3 & 2) == 0 )
        goto LABEL_18;
    }
  }
  else
  {
    v4 = 0;
    if ( (v3 & 2) == 0 )
      goto LABEL_18;
  }
  v5 = (google::protobuf::io::CodedOutputStream *)*((unsigned int *)this + 4);
  if ( ((unsigned int)v5 & 0x80000000) != 0 )
  {
    v6 = 10;
  }
  else if ( (unsigned int)v5 >= 0x80 )
  {
    v6 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v5, a2);
    v3 = *((_DWORD *)this + 17);
  }
  else
  {
    v6 = 1;
  }
  v4 += v6 + 1;
LABEL_18:
  v9 = v4 + 5;
  if ( (v3 & 4) == 0 )
    v9 = v4;
  if ( (v3 & 8) != 0 )
    v9 += 5;
  if ( (v3 & 0x10) != 0 )
    v10 = v9 + 5;
  else
    v10 = v9;
  if ( (v3 & 0x20) != 0 )
  {
    if ( *((_QWORD *)this + 4) )
      v11 = this;
    else
      v11 = (Caver::Proto::SwingableWeaponComponent *)Caver::Proto::SwingableWeaponComponent::default_instance_;
    v12 = Caver::Proto::FloatColor::ByteSize(*((Caver::Proto::FloatColor **)v11 + 4));
    if ( v12 >= 0x80 )
      v13 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
              (google::protobuf::io::CodedOutputStream *)v12,
              a2);
    else
      v13 = 1;
    v3 = *((_DWORD *)this + 17);
    v10 += v12 + v13 + 1;
  }
  if ( (v3 & 0x40) != 0 )
    v7 = v10 + 5;
  else
    v7 = v10;
  if ( (v3 & 0x80) != 0 )
  {
    v14 = (google::protobuf::io::CodedOutputStream *)*((unsigned int *)this + 11);
    if ( ((unsigned int)v14 & 0x80000000) != 0 )
    {
      v15 = 11;
    }
    else if ( (unsigned int)v14 >= 0x80 )
    {
      v17 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v14, a2);
      v3 = *((_DWORD *)this + 17);
      v15 = v17 + 1;
    }
    else
    {
      v15 = 2;
    }
    v7 += v15;
  }
  if ( (v3 & 0xFF00) != 0 )
    goto LABEL_46;
LABEL_78:
  *((_DWORD *)this + 2) = v7;
  return v7;
}

