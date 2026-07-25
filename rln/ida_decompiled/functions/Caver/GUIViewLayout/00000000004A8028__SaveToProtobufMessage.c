/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004A8028
 * Mangled: _ZNK5Caver13GUIViewLayout21SaveToProtobufMessageEPNS_5Proto13GUIViewLayoutE
 * Demangled: Caver::GUIViewLayout::SaveToProtobufMessage(Caver::Proto::GUIViewLayout *)
 *
 * Callers: 2
 *   0x0000000000200CC0  Caver::GUIViewLayout::SaveToProtobufMessage(Caver::Proto::GUIViewLayout *)
 *   0x00000000004A8028  Caver::GUIViewLayout::SaveToProtobufMessage(Caver::Proto::GUIViewLayout *)
 *
 * Callees: 9
 *   0x00000000001F4E40  Caver::Proto::GUIViewLayout::GUIViewLayout(void)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FAAB0  Caver::GUIMargins::SaveToProtobufMessage(Caver::Proto::GUIMargins *)
 *   0x00000000001FAD20  google::protobuf::internal::RepeatedPtrFieldBase::Reserve(int)
 *   0x00000000001FE380  Caver::Proto::GUIMargins::GUIMargins(void)
 *   0x00000000004A8198  Caver::GUIViewLayout::FrameForViewInBounds(Caver::Rectangle const&)
 *   0x000000000056A6A8  sub_56A6A8
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 43
 *   insn=0x00000000004A8044 string=0x00000000004A8048 ""
 *   insn=0x00000000004A8048 string=0x00000000004A804C "H"
 *   insn=0x00000000004A8050 string=0x00000000004A8054 "hZ@"
 *   insn=0x00000000004A8054 string=0x00000000004A8058 "`\n@"
 *   insn=0x00000000004A8058 string=0x00000000004A805C ")YE"
 *   insn=0x00000000004A805C string=0x00000000004A8060 ""
 *   insn=0x00000000004A8060 string=0x00000000004A8064 "hZ"
 *   insn=0x00000000004A8070 string=0x00000000004A8074 "[5"
 *   insn=0x00000000004A8074 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000004A8078 string=0x00000000004A807C ""
 *   insn=0x00000000004A807C string=0x00000000004A8080 "a"
 *   insn=0x00000000004A8080 string=0x00000000004A8084 ""
 *   insn=0x00000000004A8084 string=0x00000000004A8088 "`\n"
 *   insn=0x00000000004A809C string=0x00000000004A80A0 "hZ@"
 *   insn=0x00000000004A80A0 string=0x00000000004A80A4 "v*@"
 *   insn=0x00000000004A80A4 string=0x00000000004A80A8 ""
 *   insn=0x00000000004A80A8 string=0x00000000004A80AC "hZ"
 *   insn=0x00000000004A80B4 string=0x00000000004A80B8 "J5"
 *   insn=0x00000000004A80C0 string=0x00000000004A80C4 "v*"
 *   insn=0x00000000004A80CC string=0x00000000004A80D0 "xJ"
 *   insn=0x00000000004A80D0 string=0x00000000001FAAB0 "0'"
 *   insn=0x00000000004A80DC string=0x00000000004A80E0 "tb"
 *   insn=0x00000000004A80E0 string=0x00000000004A80E4 "i"D)"
 *   insn=0x00000000004A80E8 string=0x00000000004A80EC ")}@"
 *   insn=0x00000000004A80EC string=0x00000000004A80F0 "?"
 *   insn=0x00000000004A80F4 string=0x00000000004A80F8 "h"
 *   insn=0x00000000004A80F4 string=0x00000000004A810C "i*@"
 *   insn=0x00000000004A80F8 string=0x00000000004A80FC "*"
 *   insn=0x00000000004A80FC string=0x00000000004A8100 "j""
 *   insn=0x00000000004A8114 string=0x00000000004A8128 ""
 *   insn=0x00000000004A8120 string=0x00000000004A8124 "h&@"
 *   insn=0x00000000004A8120 string=0x00000000001FAD20 "0'"
 *   insn=0x00000000004A812C string=0x00000000004A8130 "h&"
 *   insn=0x00000000004A8130 string=0x00000000004A8134 "+5"
 *   insn=0x00000000004A8138 string=0x00000000004A813C "A3"
 *   insn=0x00000000004A813C string=0x00000000004A8140 "h""
 *   insn=0x00000000004A813C string=0x00000000001F4E40 "P'"
 *   insn=0x00000000004A8140 string=0x00000000004A8144 "i"
 *   insn=0x00000000004A8144 string=0x00000000004A8148 "\n"
 *   insn=0x00000000004A8148 string=0x00000000004A814C "j""
 *   insn=0x00000000004A814C string=0x00000000004A8150 "6y("
 *   insn=0x00000000004A8188 string=0x00000000004A818C "I<"
 *   insn=0x00000000004A818C string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_QWORD *__fastcall Caver::GUIViewLayout::SaveToProtobufMessage(_QWORD *this, Caver::Proto::GUIViewLayout *a2)
{
  _QWORD *v2; // x20
  __int64 *v4; // x0
  Caver::Proto::GUIMargins *v5; // x22
  Caver::GUIViewLayout **v6; // x23
  Caver::GUIViewLayout **i; // x24
  int v8; // w8
  Caver::GUIViewLayout *v9; // x21
  __int64 v10; // x9
  __int64 v11; // x8
  Caver::Proto::GUIViewLayout *v12; // x22
  __int64 v13; // x8
  __int64 v14; // x9

  v2 = this;
  if ( *(_QWORD *)(*this - 24LL) )
  {
    v4 = (__int64 *)*((_QWORD *)a2 + 2);
    *((_DWORD *)a2 + 22) |= 1u;
    if ( v4 == &Caver::Proto::GUIViewLayout::_default_identifier_ )
    {
      v4 = (__int64 *)operator new(8u);
      *v4 = (__int64)&byte_6FD2F8;
      *((_QWORD *)a2 + 2) = v4;
    }
    this = (_QWORD *)sub_56A6A8(v4);
  }
  if ( *((_DWORD *)v2 + 20) )
  {
    v5 = (Caver::Proto::GUIMargins *)*((_QWORD *)a2 + 10);
    *((_DWORD *)a2 + 22) |= 4u;
    if ( !v5 )
    {
      v5 = (Caver::Proto::GUIMargins *)operator new(0x20u);
      Caver::Proto::GUIMargins::GUIMargins(v5);
      *((_QWORD *)a2 + 10) = v5;
    }
    this = (_QWORD *)Caver::GUIMargins::SaveToProtobufMessage((Caver::GUIMargins *)(v2 + 10), v5);
  }
  v6 = (Caver::GUIViewLayout **)v2[1];
  for ( i = (Caver::GUIViewLayout **)v2[2]; i != v6; v6 += 2 )
  {
    v8 = *((_DWORD *)a2 + 9);
    v9 = *v6;
    v10 = *((int *)a2 + 8);
    if ( (int)v10 >= v8 )
    {
      if ( v8 == *((_DWORD *)a2 + 10) )
      {
        google::protobuf::internal::RepeatedPtrFieldBase::Reserve(
          (Caver::Proto::GUIViewLayout *)((char *)a2 + 24),
          v8 + 1);
        v8 = *((_DWORD *)a2 + 9);
      }
      *((_DWORD *)a2 + 9) = v8 + 1;
      v12 = (Caver::Proto::GUIViewLayout *)operator new(0x60u);
      Caver::Proto::GUIViewLayout::GUIViewLayout(v12);
      v13 = *((int *)a2 + 8);
      v14 = *((_QWORD *)a2 + 3);
      *((_DWORD *)a2 + 8) = v13 + 1;
      *(_QWORD *)(v14 + 8 * v13) = v12;
    }
    else
    {
      v11 = *((_QWORD *)a2 + 3);
      *((_DWORD *)a2 + 8) = v10 + 1;
      v12 = *(Caver::Proto::GUIViewLayout **)(v11 + 8 * v10);
    }
    this = (_QWORD *)Caver::GUIViewLayout::SaveToProtobufMessage(v9, v12);
  }
  return this;
}

