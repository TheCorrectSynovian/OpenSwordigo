/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000032759C
 * Mangled: _ZN5Caver5Proto32StaticMonsterControllerComponent27MergePartialFromCodedStreamEPN6google8protobuf2io16CodedInputStreamE
 * Demangled: Caver::Proto::StaticMonsterControllerComponent::MergePartialFromCodedStream(google::protobuf::io::CodedInputStream *)
 *
 * Callers: 0
 *
 * Callees: 8
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F7A40  google::protobuf::io::CodedInputStream::ReadTagFallback(void)
 *   0x00000000001F8570  operator new[](ulong)
 *   0x00000000001F9050  google::protobuf::io::CodedInputStream::ReadVarint32Fallback(uint *)
 *   0x00000000001FD8D0  google::protobuf::internal::WireFormatLite::SkipField(google::protobuf::io::CodedInputStream *,uint)
 *   0x0000000000201760  .memcpy
 *   0x0000000000202A10  google::protobuf::internal::WireFormatLite::ReadPackedPrimitiveNoInline<int,(google::protobuf::internal::WireFormatLite::FieldType)5>(google::protobuf::io::CodedInputStream *,google::protobuf::RepeatedField<int> *)
 *
 * Referenced strings: 93
 *   insn=0x00000000003275B8 string=0x00000000003275BC "W"
 *   insn=0x00000000003275D8 string=0x00000000003275DC "h"
 *   insn=0x00000000003275E0 string=0x00000000003275E4 """
 *   insn=0x00000000003275E4 string=0x00000000003275E8 "\t"
 *   insn=0x00000000003275EC string=0x00000000003275F0 "!"
 *   insn=0x00000000003275F0 string=0x00000000003275F4 ""
 *   insn=0x00000000003275F4 string=0x00000000003275F8 "a""
 *   insn=0x00000000003275F8 string=0x00000000003275FC "h"
 *   insn=0x0000000000327600 string=0x000000000032761C "(|"
 *   insn=0x0000000000327608 string=0x000000000032760C "A"
 *   insn=0x000000000032760C string=0x00000000001F7A40 "0'"
 *   insn=0x0000000000327610 string=0x0000000000327614 "a""
 *   insn=0x0000000000327624 string=0x0000000000327660 "("
 *   insn=0x0000000000327628 string=0x000000000032762C "a"
 *   insn=0x000000000032762C string=0x0000000000327630 "?"
 *   insn=0x000000000032762C string=0x0000000000327698 "("
 *   insn=0x0000000000327630 string=0x0000000000327634 "!"
 *   insn=0x0000000000327634 string=0x0000000000327638 "i"
 *   insn=0x0000000000327638 string=0x000000000032763C "?"
 *   insn=0x000000000032763C string=0x0000000000327640 "B"
 *   insn=0x0000000000327640 string=0x0000000000327644 "*"
 *   insn=0x0000000000327644 string=0x0000000000327648 "\n"
 *   insn=0x0000000000327648 string=0x000000000032764C "J"
 *   insn=0x000000000032764C string=0x0000000000327650 ")"
 *   insn=0x0000000000327654 string=0x0000000000327658 "i"
 *   insn=0x0000000000327658 string=0x000000000032765C "!"
 *   insn=0x0000000000327664 string=0x0000000000327668 "`"
 *   insn=0x0000000000327668 string=0x000000000032766C "h"
 *   insn=0x000000000032766C string=0x0000000000327670 "i"
 *   insn=0x0000000000327670 string=0x0000000000327674 "?"
 *   insn=0x0000000000327678 string=0x000000000032767C "("
 *   insn=0x000000000032767C string=0x0000000000327680 "H"
 *   insn=0x0000000000327684 string=0x0000000000327688 "("
 *   insn=0x000000000032768C string=0x0000000000327690 "h"
 *   insn=0x0000000000327690 string=0x0000000000327694 """
 *   insn=0x00000000003276A8 string=0x00000000001FD8D0 "0'"
 *   insn=0x00000000003276AC string=0x00000000003276B0 "p"
 *   insn=0x00000000003276BC string=0x00000000003276C0 " "
 *   insn=0x00000000003276C0 string=0x00000000003276C4 "k"
 *   insn=0x00000000003276C0 string=0x0000000000327824 "i"
 *   insn=0x00000000003276CC string=0x00000000003276D0 "`F"
 *   insn=0x00000000003276D0 string=0x00000000001F9050 "0'"
 *   insn=0x00000000003276D8 string=0x00000000003276DC "i"
 *   insn=0x00000000003276E4 string=0x00000000003276E8 "?"
 *   insn=0x00000000003276E8 string=0x00000000003276EC "j"
 *   insn=0x00000000003276F0 string=0x00000000003276F4 "B"
 *   insn=0x00000000003276F4 string=0x00000000003276F8 "*"
 *   insn=0x00000000003276F8 string=0x00000000003276FC "_A"
 *   insn=0x0000000000327700 string=0x0000000000327704 "N"
 *   insn=0x0000000000327704 string=0x000000000032783C ")"
 *   insn=0x000000000032770C string=0x0000000000327710 "PF"
 *   insn=0x0000000000327724 string=0x0000000000327728 "h"
 *   insn=0x0000000000327728 string=0x000000000032772C "i{"
 *   insn=0x000000000032772C string=0x0000000000327730 "?"
 *   insn=0x0000000000327730 string=0x0000000000327734 "("
 *   insn=0x0000000000327734 string=0x0000000000327738 "\t}@"
 *   insn=0x000000000032773C string=0x0000000000327740 ")}"
 *   insn=0x0000000000327744 string=0x0000000000327748 "}~"
 *   insn=0x0000000000327750 string=0x0000000000327754 "|"
 *   insn=0x0000000000327758 string=0x00000000001F8570 "0'"
 *   insn=0x000000000032777C string=0x00000000001F4F60 "P'"
 *   insn=0x0000000000327784 string=0x0000000000327788 "i"
 *   insn=0x0000000000327794 string=0x0000000000327798 "K"
 *   insn=0x000000000032779C string=0x00000000003277A0 "+"
 *   insn=0x00000000003277A0 string=0x00000000003277A4 "J"
 *   insn=0x00000000003277A4 string=0x00000000003277A8 "V"
 *   insn=0x00000000003277A8 string=0x00000000003277AC "j"
 *   insn=0x00000000003277AC string=0x00000000003277B0 "_"
 *   insn=0x00000000003277B4 string=0x00000000003277B8 "K"
 *   insn=0x00000000003277BC string=0x00000000003277C0 "!"
 *   insn=0x00000000003277C0 string=0x00000000003277C4 "K"
 *   insn=0x00000000003277C8 string=0x00000000003277CC "k"
 *   insn=0x00000000003277D0 string=0x00000000003277D4 "i"
 *   insn=0x00000000003277D8 string=0x00000000003277DC ")"
 *   insn=0x00000000003277DC string=0x00000000003277E0 "J\t"
 *   insn=0x00000000003277E4 string=0x00000000003277E8 "j"
 *   insn=0x00000000003277E8 string=0x00000000003277EC ""
 *   insn=0x0000000000327810 string=0x0000000000327814 "K"
 *   insn=0x0000000000327818 string=0x000000000032781C "\ty*"
 *   insn=0x000000000032781C string=0x0000000000327820 "l"
 *   insn=0x0000000000327824 string=0x0000000000327828 "?"
 *   insn=0x0000000000327828 string=0x000000000032782C """
 *   insn=0x000000000032782C string=0x0000000000327830 "*"
 *   insn=0x000000000032782C string=0x0000000000327850 "?"
 *   insn=0x0000000000327830 string=0x0000000000327834 "_A"
 *   insn=0x000000000032783C string=0x0000000000327840 "i"
 *   insn=0x0000000000327840 string=0x0000000000327844 "?"
 *   insn=0x0000000000327850 string=0x0000000000327854 "A"
 *   insn=0x0000000000327854 string=0x0000000000327858 "h.@"
 *   insn=0x0000000000327858 string=0x000000000032785C ""
 *   insn=0x0000000000327864 string=0x0000000000327868 "`"
 *   insn=0x0000000000327884 string=0x0000000000327888 "!"
 *   insn=0x00000000003278AC string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::StaticMonsterControllerComponent::MergePartialFromCodedStream(
        Caver::Proto::StaticMonsterControllerComponent *this,
        google::protobuf::io::CodedInputStream *a2,
        unsigned int a3)
{
  __int64 *v5; // x21
  char *v6; // x24
  char *v7; // x8
  unsigned __int64 v8; // x1
  unsigned int TagFallback; // w0
  _BYTE *v10; // x8
  char *v11; // x9
  unsigned int v12; // w10
  _BYTE *v13; // x9
  unsigned __int8 *v14; // x9
  unsigned int v15; // w26
  int v16; // w11
  int v17; // w27
  int v18; // w8
  char *v19; // x22
  __int64 v20; // x9
  __int64 v21; // x8
  unsigned __int64 v22; // x0
  void *v23; // x0
  __int64 v24; // x8
  int v25; // w9
  int v26; // w10
  int v27; // w22
  unsigned __int64 v28; // x9
  _BYTE *v29; // x10
  unsigned int v30; // w9
  __int64 v31; // x10
  __int64 result; // x0
  unsigned int v33; // [xsp+4h] [xbp-5Ch] BYREF
  __int64 v34; // [xsp+8h] [xbp-58h]

  v5 = (__int64 *)((char *)this + 16);
  v6 = (char *)this + 32;
  v34 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v7 = (char *)*((_QWORD *)a2 + 1);
        if ( (unsigned __int64)v7 >= *((_QWORD *)a2 + 2) || *v7 < 0 )
        {
          TagFallback = google::protobuf::io::CodedInputStream::ReadTagFallback(a2);
          v8 = TagFallback;
          *((_DWORD *)a2 + 8) = TagFallback;
          if ( !TagFallback )
            return 1;
        }
        else
        {
          v8 = (unsigned __int8)*v7;
          *((_DWORD *)a2 + 8) = v8;
          *((_QWORD *)a2 + 1) = v7 + 1;
          if ( !(_DWORD)v8 )
            return 1;
        }
        if ( (unsigned int)v8 >> 3 == 2 )
          break;
        if ( (unsigned int)v8 >> 3 != 1 || (v8 & 7) != 0 )
          goto LABEL_18;
        v11 = (char *)*((_QWORD *)a2 + 1);
        v10 = (_BYTE *)*((_QWORD *)a2 + 2);
        if ( v11 >= v10 || *v11 < 0 )
        {
          if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v33) & 1) == 0 )
            return 0;
          v12 = v33;
          v13 = (_BYTE *)*((_QWORD *)a2 + 1);
          v10 = (_BYTE *)*((_QWORD *)a2 + 2);
        }
        else
        {
          v12 = (unsigned __int8)*v11;
          v13 = v11 + 1;
          v33 = v12;
          *((_QWORD *)a2 + 1) = v13;
        }
        v16 = *((_DWORD *)this + 12);
        *((_DWORD *)this + 3) = v12;
        *((_DWORD *)this + 12) = v16 | 1;
        if ( v13 < v10 && *v13 == 16 )
          goto LABEL_52;
      }
      if ( (v8 & 7) != 2 )
        break;
      if ( (google::protobuf::internal::WireFormatLite::ReadPackedPrimitiveNoInline<int,(google::protobuf::internal::WireFormatLite::FieldType)5>(a2)
          & 1) == 0 )
        return 0;
      while ( 2 )
      {
        v13 = (_BYTE *)*((_QWORD *)a2 + 1);
        v10 = (_BYTE *)*((_QWORD *)a2 + 2);
        if ( v13 < v10 && *v13 == 16 )
        {
LABEL_52:
          v14 = v13 + 1;
          *((_QWORD *)a2 + 1) = v14;
          if ( v14 >= v10 )
          {
LABEL_28:
            if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v33) & 1) == 0 )
              return 0;
            v15 = v33;
            goto LABEL_30;
          }
LABEL_16:
          if ( (char)*v14 < 0 )
            goto LABEL_28;
          v15 = *v14;
          v33 = v15;
          *((_QWORD *)a2 + 1) = v14 + 1;
LABEL_30:
          v17 = *((_DWORD *)this + 6);
          if ( v17 == *((_DWORD *)this + 7) )
          {
            if ( 2 * v17 < v17 + 1 )
              v18 = v17 + 1;
            else
              v18 = 2 * v17;
            v19 = (char *)*((_QWORD *)this + 2);
            v20 = ((unsigned __int64)v18 * (unsigned __int128)4uLL) >> 64;
            *((_DWORD *)this + 7) = v18;
            v21 = 4LL * v18;
            if ( v20 )
              v22 = -1;
            else
              v22 = v21;
            v23 = (void *)operator new[](v22);
            *((_QWORD *)this + 2) = v23;
            memcpy(v23, v19, 4LL * v17);
            if ( v19 != v6 && v19 )
            {
              operator delete[](v19);
              v17 = *((_DWORD *)this + 6);
            }
          }
          v24 = *((_QWORD *)this + 2);
          *((_DWORD *)this + 6) = v17 + 1;
          *(_DWORD *)(v24 + 4LL * v17) = v15;
          v25 = *((_DWORD *)this + 6);
          v26 = *((_DWORD *)this + 7);
          if ( v26 - v25 >= 1 )
          {
            v27 = v26 + 1 - v25;
            do
            {
              v29 = (_BYTE *)*((_QWORD *)a2 + 1);
              v28 = *((_QWORD *)a2 + 2);
              if ( (unsigned __int64)v29 >= v28 || *v29 != 16 )
                break;
              *((_QWORD *)a2 + 1) = v29 + 1;
              if ( (unsigned __int64)(v29 + 1) >= v28 || (char)v29[1] < 0 )
              {
                if ( (google::protobuf::io::CodedInputStream::ReadVarint32Fallback(a2, &v33) & 1) == 0 )
                  return 0;
                v30 = v33;
                v24 = *v5;
              }
              else
              {
                v30 = (unsigned __int8)v29[1];
                v33 = v30;
                *((_QWORD *)a2 + 1) = v29 + 2;
              }
              v31 = *((int *)this + 6);
              --v27;
              *((_DWORD *)this + 6) = v31 + 1;
              *(_DWORD *)(v24 + 4 * v31) = v30;
            }
            while ( v27 > 1 );
          }
          continue;
        }
        break;
      }
      if ( v13 == v10 && *((_DWORD *)a2 + 11) )
      {
        result = 1;
        *((_DWORD *)a2 + 8) = 0;
        *((_BYTE *)a2 + 36) = 1;
        return result;
      }
    }
    if ( (v8 & 7) == 0 )
    {
      v14 = (unsigned __int8 *)*((_QWORD *)a2 + 1);
      if ( (unsigned __int64)v14 >= *((_QWORD *)a2 + 2) )
        goto LABEL_28;
      goto LABEL_16;
    }
LABEL_18:
    if ( (v8 & 7) == 4 )
      return 1;
    if ( (google::protobuf::internal::WireFormatLite::SkipField(a2, (google::protobuf::io::CodedInputStream *)v8, a3) & 1) == 0 )
      return 0;
  }
}

