/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004DE67C
 * Mangled: _ZN6google8protobuf8internal12ExtensionSet19ParseMessageSetItemEPNS0_2io16CodedInputStreamEPNS1_15ExtensionFinderEPNS1_12FieldSkipperE
 * Demangled: google::protobuf::internal::ExtensionSet::ParseMessageSetItem(google::protobuf::io::CodedInputStream *,google::protobuf::internal::ExtensionFinder *,google::protobuf::internal::FieldSkipper *)
 *
 * Callers: 1
 *   0x00000000001FD900  google::protobuf::internal::ExtensionSet::ParseMessageSetItem(google::protobuf::io::CodedInputStream *,google::protobuf::internal::ExtensionFinder *,google::protobuf::internal::FieldSkipper *)
 *
 * Callees: 12
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6EE0  google::protobuf::io::CodedInputStream::ReadString(std::string *,int)
 *   0x00000000001F7A40  google::protobuf::io::CodedInputStream::ReadTagFallback(void)
 *   0x00000000001F9050  google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *)
 *   0x0000000000200E40  google::protobuf::internal::ExtensionSet::ParseField(uint,google::protobuf::io::CodedInputStream *,google::protobuf::internal::ExtensionFinder *,google::protobuf::internal::FieldSkipper *)
 *   0x00000000002028D0  google::protobuf::io::CodedInputStream::BackUpInputToCurrentPosition(void)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000567614  sub_567614
 *   0x0000000000568CB8  sub_568CB8
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 102
 *   insn=0x00000000004DE698 string=0x00000000004DE69C "Z"
 *   insn=0x00000000004DE69C string=0x00000000004DE6A0 "8"
 *   insn=0x00000000004DE6A8 string=0x00000000004DE6AC "J"
 *   insn=0x00000000004DE6AC string=0x00000000004DE6B0 " "
 *   insn=0x00000000004DE6B8 string=0x00000000005987F0 "`a"
 *   insn=0x00000000004DE6CC string=0x00000000004DE6D0 "{"
 *   insn=0x00000000004DE6D4 string=0x00000000004DE6D8 "\tc"
 *   insn=0x00000000004DE6DC string=0x00000000004DE6E0 "\nq"
 *   insn=0x00000000004DE6F0 string=0x00000000004DE6F4 "?"
 *   insn=0x00000000004DE6F4 string=0x00000000004DE6F8 "B"
 *   insn=0x00000000004DE6F8 string=0x00000000004DE6FC "("
 *   insn=0x00000000004DE6FC string=0x00000000004DE700 ""
 *   insn=0x00000000004DE700 string=0x00000000004DE704 ""
 *   insn=0x00000000004DE704 string=0x00000000004DE708 ")"
 *   insn=0x00000000004DE714 string=0x00000000004DE718 "\t"
 *   insn=0x00000000004DE71C string=0x00000000004DE770 "i"
 *   insn=0x00000000004DE724 string=0x00000000001F7A40 "0'"
 *   insn=0x00000000004DE738 string=0x00000000004DE73C "i{"
 *   insn=0x00000000004DE740 string=0x00000000004DE744 ")"
 *   insn=0x00000000004DE744 string=0x00000000004DE748 " "
 *   insn=0x00000000004DE748 string=0x00000000004DE74C "7"
 *   insn=0x00000000004DE74C string=0x00000000004DE790 "c"
 *   insn=0x00000000004DE764 string=0x00000000004DE768 "@"
 *   insn=0x00000000004DE768 string=0x00000000004DE76C "v"
 *   insn=0x00000000004DE770 string=0x00000000004DE774 ")\t@"
 *   insn=0x00000000004DE780 string=0x00000000004DE784 " "
 *   insn=0x00000000004DE784 string=0x00000000004DE788 "@"
 *   insn=0x00000000004DE788 string=0x00000000004DE78C "n"
 *   insn=0x00000000004DE79C string=0x00000000004DE7A0 "B"
 *   insn=0x00000000004DE7A0 string=0x00000000004DE7A4 "\t"
 *   insn=0x00000000004DE7A4 string=0x00000000004DE7A8 "\t"
 *   insn=0x00000000004DE7A8 string=0x00000000004DE7AC """
 *   insn=0x00000000004DE7AC string=0x00000000004DE7B0 ""
 *   insn=0x00000000004DE7C0 string=0x00000000004DE7C4 "?"
 *   insn=0x00000000004DE7C8 string=0x00000000004DE7CC "("
 *   insn=0x00000000004DE7D0 string=0x00000000004DE7D4 ""
 *   insn=0x00000000004DE7D4 string=0x00000000004DE7D8 ")"
 *   insn=0x00000000004DE7F0 string=0x00000000004DE7F4 "`"
 *   insn=0x00000000004DE7F0 string=0x00000000001F9050 "0'"
 *   insn=0x00000000004DE804 string=0x00000000001F6EE0 "0'"
 *   insn=0x00000000004DE82C string=0x00000000004DE830 "a"
 *   insn=0x00000000004DE830 string=0x00000000004DE8FC ")"
 *   insn=0x00000000004DE838 string=0x00000000004DE83C "B"
 *   insn=0x00000000004DE85C string=0x00000000004DE860 "I"
 *   insn=0x00000000004DE860 string=0x00000000004DE864 "i"
 *   insn=0x00000000004DE864 string=0x00000000004DE868 "H"
 *   insn=0x00000000004DE894 string=0x00000000004DE898 "?"
 *   insn=0x00000000004DE8AC string=0x00000000004DE8B0 "d"
 *   insn=0x00000000004DE8B0 string=0x00000000004DE8B4 "`"
 *   insn=0x00000000004DE8E4 string=0x00000000004DE8E8 "h"
 *   insn=0x00000000004DE8FC string=0x00000000004DE900 ")=G"
 *   insn=0x00000000004DE900 string=0x00000000004DE904 "!"
 *   insn=0x00000000004DE908 string=0x00000000004DE90C "\t"
 *   insn=0x00000000004DE908 string=0x00000000004DE920 "\t"
 *   insn=0x00000000004DE90C string=0x00000000004DE910 "*"
 *   insn=0x00000000004DE910 string=0x00000000004DE914 "\n"
 *   insn=0x00000000004DE91C string=0x00000000004DE92C "?"
 *   insn=0x00000000004DE920 string=0x00000000004DE924 "*"
 *   insn=0x00000000004DE924 string=0x00000000004DE928 "\n"
 *   insn=0x00000000004DE92C string=0x00000000004DE930 ","
 *   insn=0x00000000004DE950 string=0x00000000004DE954 "(a"
 *   insn=0x00000000004DE95C string=0x00000000004DE960 "H"
 *   insn=0x00000000004DE95C string=0x00000000004DE990 "*"
 *   insn=0x00000000004DE96C string=0x00000000004DE9E0 "<^"
 *   insn=0x00000000004DE990 string=0x00000000004DE994 "J=G"
 *   insn=0x00000000004DE994 string=0x00000000004DE998 ")!"
 *   insn=0x00000000004DE99C string=0x00000000004DE9A0 "*"
 *   insn=0x00000000004DE99C string=0x00000000004DE9B4 "*"
 *   insn=0x00000000004DE9A0 string=0x00000000004DE9A4 "K"
 *   insn=0x00000000004DE9A4 string=0x00000000004DE9A8 "+"
 *   insn=0x00000000004DE9B0 string=0x00000000004DE9C0 "_"
 *   insn=0x00000000004DE9B4 string=0x00000000004DE9B8 "K"
 *   insn=0x00000000004DE9B8 string=0x00000000004DE9BC "+"
 *   insn=0x00000000004DE9D0 string=0x00000000004DE9D4 "t."
 *   insn=0x00000000004DE9E0 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000004DEA0C string=0x00000000004DEA10 "(a"
 *   insn=0x00000000004DEA18 string=0x00000000004DEA1C "*"
 *   insn=0x00000000004DEA1C string=0x00000000004DEA20 "J=G"
 *   insn=0x00000000004DEA20 string=0x00000000004DEA24 ")!"
 *   insn=0x00000000004DEA28 string=0x00000000004DEA2C "*"
 *   insn=0x00000000004DEA28 string=0x00000000004DEA40 "*"
 *   insn=0x00000000004DEA2C string=0x00000000004DEA30 "K"
 *   insn=0x00000000004DEA30 string=0x00000000004DEA34 "+"
 *   insn=0x00000000004DEA3C string=0x00000000004DEA4C "_"
 *   insn=0x00000000004DEA40 string=0x00000000004DEA44 "K"
 *   insn=0x00000000004DEA44 string=0x00000000004DEA48 "+"
 *   insn=0x00000000004DEA58 string=0x00000000004DEA5C "R."
 *   insn=0x00000000004DEA74 string=0x00000000004DEA78 ")"
 *   insn=0x00000000004DEA78 string=0x00000000004DEA7C ")=G"
 *   insn=0x00000000004DEA7C string=0x00000000004DEA80 "!"
 *   insn=0x00000000004DEA80 string=0x00000000004DEA84 "i"
 *   insn=0x00000000004DEA84 string=0x00000000004DEA88 "\t"
 *   insn=0x00000000004DEA84 string=0x00000000004DEAB0 "\t"
 *   insn=0x00000000004DEA88 string=0x00000000004DEA8C "*"
 *   insn=0x00000000004DEA8C string=0x00000000004DEA90 "\n"
 *   insn=0x00000000004DEA94 string=0x00000000004DEA98 "?"
 *   insn=0x00000000004DEA98 string=0x00000000004DEA9C "l"
 *   insn=0x00000000004DEAA0 string=0x00000000004DEAA4 "@."
 *   insn=0x00000000004DEAB0 string=0x00000000004DEAB4 "*"
 *   insn=0x00000000004DEAB4 string=0x00000000004DEAB8 "\n"
 *   insn=0x00000000004DEAB8 string=0x00000000004DEABC "?"
 *   insn=0x00000000004DEABC string=0x00000000004DEAC0 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall google::protobuf::internal::ExtensionSet::ParseMessageSetItem(
        google::protobuf::internal::ExtensionSet *this,
        google::protobuf::io::CodedInputStream *a2,
        google::protobuf::internal::ExtensionFinder *a3,
        google::protobuf::internal::FieldSkipper *a4)
{
  unsigned int v8; // w23
  unsigned __int8 *v9; // x9
  unsigned int TagFallback; // w8
  __int64 result; // x0
  char *v12; // x8
  char *v13; // x9
  unsigned int v14; // w8
  int v15; // w28
  void *v16; // x0
  __int64 v17; // x9
  int v18; // w28
  unsigned int *v19; // x8
  int v20; // w9
  void *v21; // x8
  unsigned int *v22; // x9
  int v23; // w10
  unsigned int v24; // w19
  _QWORD v25[3]; // [xsp+28h] [xbp-B8h] BYREF
  int v26; // [xsp+40h] [xbp-A0h]
  __int64 v27; // [xsp+44h] [xbp-9Ch]
  __int16 v28; // [xsp+4Ch] [xbp-94h]
  int v29; // [xsp+50h] [xbp-90h]
  __int128 v30; // [xsp+54h] [xbp-8Ch]
  int v31; // [xsp+64h] [xbp-7Ch]
  __int64 v32; // [xsp+68h] [xbp-78h]
  __int64 v33; // [xsp+70h] [xbp-70h]
  unsigned int v34; // [xsp+78h] [xbp-68h] BYREF
  _QWORD v35[2]; // [xsp+80h] [xbp-60h] BYREF

  v8 = 0;
  v35[1] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v35[0] = &byte_6FD2F8;
  while ( 2 )
  {
    while ( 1 )
    {
      v9 = (unsigned __int8 *)*((_QWORD *)a2 + 1);
      if ( (unsigned __int64)v9 >= *((_QWORD *)a2 + 2) || (char)*v9 < 0 )
        break;
      TagFallback = *v9;
      *((_DWORD *)a2 + 8) = TagFallback;
      *((_QWORD *)a2 + 1) = v9 + 1;
      if ( TagFallback <= 0x1A )
        goto LABEL_7;
LABEL_11:
      if ( ((*(__int64 (__fastcall **)(google::protobuf::internal::FieldSkipper *, google::protobuf::io::CodedInputStream *, _QWORD))(*(_QWORD *)a4 + 16LL))(
              a4,
              a2,
              TagFallback)
          & 1) == 0 )
        goto LABEL_42;
    }
    TagFallback = google::protobuf::io::CodedInputStream::ReadTagFallback(a2);
    *((_DWORD *)a2 + 8) = TagFallback;
LABEL_7:
    result = 0;
    switch ( TagFallback )
    {
      case 0u:
        goto LABEL_44;
      case 0xCu:
        result = 1;
        goto LABEL_44;
      case 0x10u:
        v13 = (char *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v13 >= *((_QWORD *)a2 + 2) || *v13 < 0 )
        {
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v34) & 1) == 0 )
            goto LABEL_42;
          v14 = v34;
        }
        else
        {
          v14 = (unsigned __int8)*v13;
          v34 = v14;
          *((_QWORD *)a2 + 1) = v13 + 1;
        }
        v8 = (8 * v14) | 2;
        v17 = *(_QWORD *)(v35[0] - 24LL);
        if ( !v17 )
          continue;
        v25[2] = v35[0] + (int)v17;
        v25[0] = 0;
        v25[1] = v35[0];
        v26 = v17;
        v28 = 0;
        v27 = 0;
        v29 = v17;
        v30 = xmmword_5987E0;
        v31 = 64;
        v32 = 0;
        v33 = 0;
        if ( (google::protobuf::internal::ExtensionSet::ParseField(
                this,
                v8,
                (google::protobuf::io::CodedInputStream *)v25,
                a3,
                a4)
            & 1) != 0 )
        {
          sub_568CB8(v35, 0, *(_QWORD *)(v35[0] - 24LL), 0);
          v18 = 0;
          if ( !v25[0] )
            goto LABEL_34;
        }
        else
        {
          v18 = 1;
          if ( !v25[0] )
            goto LABEL_34;
        }
        google::protobuf::io::CodedInputStream::BackUpInputToCurrentPosition((google::protobuf::io::CodedInputStream *)v25);
LABEL_34:
        if ( v18 )
          goto LABEL_42;
        continue;
      case 0x1Au:
        if ( v8 )
        {
          if ( (google::protobuf::internal::ExtensionSet::ParseField(this, v8, a2, a3, a4) & 1) == 0 )
            goto LABEL_42;
          continue;
        }
        v25[0] = &byte_6FD2F8;
        v12 = (char *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v12 >= *((_QWORD *)a2 + 2) || *v12 < 0 )
        {
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v34) & 1) == 0 )
            goto LABEL_22;
        }
        else
        {
          v34 = (unsigned __int8)*v12;
          *((_QWORD *)a2 + 1) = v12 + 1;
        }
        if ( (google::protobuf::io::CodedInputStream::ReadString() & 1) == 0 )
        {
LABEL_22:
          v15 = 1;
          goto LABEL_23;
        }
        sub_567614(v35, v25);
        v15 = 0;
LABEL_23:
        v16 = (void *)(v25[0] - 24LL);
        if ( (__int64 *)(v25[0] - 24LL) == &qword_6FD2E0 )
          goto LABEL_24;
        v19 = (unsigned int *)(v25[0] - 8LL);
        if ( &pthread_create )
        {
          do
            v20 = __ldaxr(v19);
          while ( __stlxr(v20 - 1, v19) );
        }
        else
        {
          v20 = (*v19)--;
        }
        if ( v20 > 0 )
        {
LABEL_24:
          v8 = 0;
          if ( v15 )
            goto LABEL_42;
          continue;
        }
        operator delete(v16);
        v8 = 0;
        if ( !v15 )
          continue;
LABEL_42:
        result = 0;
LABEL_44:
        v21 = (void *)(v35[0] - 24LL);
        if ( (__int64 *)(v35[0] - 24LL) != &qword_6FD2E0 )
        {
          v22 = (unsigned int *)(v35[0] - 8LL);
          if ( &pthread_create )
          {
            do
              v23 = __ldaxr(v22);
            while ( __stlxr(v23 - 1, v22) );
          }
          else
          {
            v23 = (*v22)--;
          }
          if ( v23 <= 0 )
          {
            v24 = result;
            operator delete(v21);
            return v24;
          }
        }
        return result;
      default:
        goto LABEL_11;
    }
  }
}

