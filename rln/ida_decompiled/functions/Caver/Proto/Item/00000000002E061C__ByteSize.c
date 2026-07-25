/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002E061C
 * Mangled: _ZNK5Caver5Proto4Item8ByteSizeEv
 * Demangled: Caver::Proto::Item::ByteSize(void)
 *
 * Callers: 1
 *   0x00000000001F9C90  Caver::Proto::Item::ByteSize(void)
 *
 * Callees: 1
 *   0x00000000001F61D0  google::protobuf::io::CodedOutputStream::VarintSize32Fallback(uint)
 *
 * Referenced strings: 63
 *   insn=0x00000000002E062C string=0x00000000002E0630 "iB@"
 *   insn=0x00000000002E0630 string=0x00000000002E0634 "?"
 *   insn=0x00000000002E063C string=0x00000000002E0658 "`"
 *   insn=0x00000000002E0644 string=0x00000000002E0648 "$"
 *   insn=0x00000000002E0644 string=0x00000000002E0698 "u\n@"
 *   insn=0x00000000002E0650 string=0x00000000002E0654 "w"
 *   insn=0x00000000002E0650 string=0x00000000002E07C8 "`>@"
 *   insn=0x00000000002E0654 string=0x00000000002E0830 "t\n"
 *   insn=0x00000000002E065C string=0x00000000002E0678 "@"
 *   insn=0x00000000002E0660 string=0x00000000002E0664 """
 *   insn=0x00000000002E066C string=0x00000000002E0670 "I"
 *   insn=0x00000000002E0688 string=0x00000000002E068C "iB@"
 *   insn=0x00000000002E0688 string=0x00000000001F61D0 "0'"
 *   insn=0x00000000002E0690 string=0x00000000002E0694 ")"
 *   insn=0x00000000002E069C string=0x00000000002E06A0 ""
 *   insn=0x00000000002E06A4 string=0x00000000002E06A8 "b"
 *   insn=0x00000000002E06AC string=0x00000000002E06B0 ""
 *   insn=0x00000000002E06B0 string=0x00000000002E06CC "H"
 *   insn=0x00000000002E06BC string=0x00000000002E06C0 "iB@"
 *   insn=0x00000000002E06C4 string=0x00000000002E06C8 ""
 *   insn=0x00000000002E06D8 string=0x00000000002E06E8 "u"
 *   insn=0x00000000002E06DC string=0x00000000002E072C "u"
 *   insn=0x00000000002E06E0 string=0x00000000002E06E4 "3"
 *   insn=0x00000000002E06E0 string=0x00000000002E0770 "u"
 *   insn=0x00000000002E06EC string=0x00000000002E06F0 ""
 *   insn=0x00000000002E06F4 string=0x00000000002E06F8 "b"
 *   insn=0x00000000002E06FC string=0x00000000002E0700 ""
 *   insn=0x00000000002E0700 string=0x00000000002E071C "H"
 *   insn=0x00000000002E070C string=0x00000000002E0710 "iB@"
 *   insn=0x00000000002E0714 string=0x00000000002E0718 ""
 *   insn=0x00000000002E0730 string=0x00000000002E0734 ""
 *   insn=0x00000000002E0738 string=0x00000000002E073C "b"
 *   insn=0x00000000002E0740 string=0x00000000002E0744 ""
 *   insn=0x00000000002E0744 string=0x00000000002E0760 "H"
 *   insn=0x00000000002E0750 string=0x00000000002E0754 "iB@"
 *   insn=0x00000000002E0758 string=0x00000000002E075C ""
 *   insn=0x00000000002E0768 string=0x00000000002E076C ")"
 *   insn=0x00000000002E0774 string=0x00000000002E0778 ""
 *   insn=0x00000000002E077C string=0x00000000002E0780 "b"
 *   insn=0x00000000002E0784 string=0x00000000002E0788 ""
 *   insn=0x00000000002E0788 string=0x00000000002E07A4 "H"
 *   insn=0x00000000002E0794 string=0x00000000002E0798 "iB@"
 *   insn=0x00000000002E079C string=0x00000000002E07A0 ""
 *   insn=0x00000000002E07B0 string=0x00000000002E07B4 "?"
 *   insn=0x00000000002E07B8 string=0x00000000002E07BC ")"
 *   insn=0x00000000002E07BC string=0x00000000002E07E0 "`6@"
 *   insn=0x00000000002E07C0 string=0x00000000002E07C4 "i"
 *   insn=0x00000000002E07C0 string=0x00000000002E07FC "`:@"
 *   insn=0x00000000002E07CC string=0x00000000002E081C "h"
 *   insn=0x00000000002E07D4 string=0x00000000002E0824 "kV"
 *   insn=0x00000000002E07E0 string=0x00000000002E07E4 " "
 *   insn=0x00000000002E07E4 string=0x00000000002E0848 "h"
 *   insn=0x00000000002E07EC string=0x00000000002E0868 "ZV"
 *   insn=0x00000000002E07F4 string=0x00000000002E07F8 "i"
 *   insn=0x00000000002E0800 string=0x00000000002E0858 "h"
 *   insn=0x00000000002E0808 string=0x00000000002E0880 "TV"
 *   insn=0x00000000002E0824 string=0x00000000002E0828 ""
 *   insn=0x00000000002E085C string=0x00000000002E0860 "I"
 *   insn=0x00000000002E0868 string=0x00000000002E086C "iB@"
 *   insn=0x00000000002E086C string=0x00000000002E0870 ""
 *   insn=0x00000000002E0874 string=0x00000000002E0878 "i"
 *   insn=0x00000000002E0880 string=0x00000000002E0884 "iB@"
 *   insn=0x00000000002E0884 string=0x00000000002E0888 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::Item::ByteSize(Caver::Proto::Item *this, unsigned int a2)
{
  int v3; // w9
  unsigned int v4; // w20
  google::protobuf::io::CodedOutputStream *v5; // x0
  int v6; // w0
  _QWORD *v7; // x21
  __int64 v8; // x8
  int v9; // w10
  int v10; // w0
  _QWORD *v11; // x21
  __int64 v12; // x8
  int v13; // w10
  int v14; // w0
  _QWORD *v15; // x21
  __int64 v16; // x8
  int v17; // w10
  int v18; // w0
  _QWORD *v19; // x21
  __int64 v20; // x8
  int v21; // w10
  int v22; // w0
  google::protobuf::io::CodedOutputStream *v23; // x0
  int v24; // w8
  google::protobuf::io::CodedOutputStream *v25; // x0
  google::protobuf::io::CodedOutputStream *v26; // x0
  int v28; // w0

  v3 = *((_DWORD *)this + 16);
  if ( !(_BYTE)v3 )
  {
    v4 = 0;
    if ( (v3 & 0x100) == 0 )
      goto LABEL_52;
    goto LABEL_39;
  }
  if ( (v3 & 1) != 0 )
  {
    v5 = (google::protobuf::io::CodedOutputStream *)*((unsigned int *)this + 3);
    if ( ((unsigned int)v5 & 0x80000000) != 0 )
    {
      v4 = 11;
      if ( (v3 & 2) == 0 )
        goto LABEL_18;
    }
    else if ( (unsigned int)v5 >= 0x80 )
    {
      v6 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v5, a2);
      v3 = *((_DWORD *)this + 16);
      v4 = v6 + 1;
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
  v7 = (_QWORD *)*((_QWORD *)this + 2);
  v8 = *(_QWORD *)(*v7 - 24LL);
  if ( (unsigned int)v8 >= 0x80 )
  {
    v10 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
            (google::protobuf::io::CodedOutputStream *)(unsigned int)v8,
            a2);
    v3 = *((_DWORD *)this + 16);
    v9 = v10;
    v8 = *(_QWORD *)(*v7 - 24LL);
  }
  else
  {
    v9 = 1;
  }
  v4 += v9 + v8 + 1;
LABEL_18:
  if ( (v3 & 4) != 0 )
  {
    v11 = (_QWORD *)*((_QWORD *)this + 3);
    v12 = *(_QWORD *)(*v11 - 24LL);
    if ( (unsigned int)v12 >= 0x80 )
    {
      v14 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
              (google::protobuf::io::CodedOutputStream *)(unsigned int)v12,
              a2);
      v3 = *((_DWORD *)this + 16);
      v13 = v14;
      v12 = *(_QWORD *)(*v11 - 24LL);
    }
    else
    {
      v13 = 1;
    }
    v4 += v13 + v12 + 1;
    if ( (v3 & 8) == 0 )
    {
LABEL_20:
      if ( (v3 & 0x10) == 0 )
        goto LABEL_34;
      goto LABEL_30;
    }
  }
  else if ( (v3 & 8) == 0 )
  {
    goto LABEL_20;
  }
  v15 = (_QWORD *)*((_QWORD *)this + 4);
  v16 = *(_QWORD *)(*v15 - 24LL);
  if ( (unsigned int)v16 >= 0x80 )
  {
    v18 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
            (google::protobuf::io::CodedOutputStream *)(unsigned int)v16,
            a2);
    v3 = *((_DWORD *)this + 16);
    v17 = v18;
    v16 = *(_QWORD *)(*v15 - 24LL);
  }
  else
  {
    v17 = 1;
  }
  v4 += v17 + v16 + 1;
  if ( (v3 & 0x10) != 0 )
  {
LABEL_30:
    v19 = (_QWORD *)*((_QWORD *)this + 5);
    v20 = *(_QWORD *)(*v19 - 24LL);
    if ( (unsigned int)v20 >= 0x80 )
    {
      v22 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(
              (google::protobuf::io::CodedOutputStream *)(unsigned int)v20,
              a2);
      v3 = *((_DWORD *)this + 16);
      v21 = v22;
      v20 = *(_QWORD *)(*v19 - 24LL);
    }
    else
    {
      v21 = 1;
    }
    v4 += v21 + v20 + 1;
  }
LABEL_34:
  if ( (v3 & 0x20) != 0 )
    v4 += 2;
  if ( (v3 & 0x40) == 0 )
  {
    if ( (v3 & 0x80) == 0 )
      goto LABEL_38;
    goto LABEL_45;
  }
  v25 = (google::protobuf::io::CodedOutputStream *)*((unsigned int *)this + 13);
  if ( ((unsigned int)v25 & 0x80000000) != 0 )
  {
    v4 += 11;
    if ( (v3 & 0x80) == 0 )
      goto LABEL_38;
  }
  else
  {
    if ( (unsigned int)v25 < 0x80 )
    {
      v4 += 2;
      if ( (v3 & 0x80) != 0 )
        goto LABEL_45;
LABEL_38:
      if ( (v3 & 0x100) == 0 )
        goto LABEL_52;
      goto LABEL_39;
    }
    v28 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v25, a2);
    v3 = *((_DWORD *)this + 16);
    v4 += v28 + 1;
    if ( (v3 & 0x80) == 0 )
      goto LABEL_38;
  }
LABEL_45:
  v26 = (google::protobuf::io::CodedOutputStream *)*((unsigned int *)this + 14);
  if ( ((unsigned int)v26 & 0x80000000) != 0 )
  {
    v4 += 11;
    if ( (v3 & 0x100) == 0 )
      goto LABEL_52;
  }
  else if ( (unsigned int)v26 >= 0x80 )
  {
    v4 += google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v26, a2) + 1;
    if ( (*((_DWORD *)this + 16) & 0x100) == 0 )
      goto LABEL_52;
  }
  else
  {
    v4 += 2;
    if ( (v3 & 0x100) == 0 )
      goto LABEL_52;
  }
LABEL_39:
  v23 = (google::protobuf::io::CodedOutputStream *)*((unsigned int *)this + 15);
  if ( ((unsigned int)v23 & 0x80000000) != 0 )
  {
    v24 = 11;
  }
  else if ( (unsigned int)v23 >= 0x80 )
  {
    v24 = google::protobuf::io::CodedOutputStream::VarintSize32Fallback(v23, a2) + 1;
  }
  else
  {
    v24 = 2;
  }
  v4 += v24;
LABEL_52:
  *((_DWORD *)this + 2) = v4;
  return v4;
}

