/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000025A740
 * Mangled: _ZNK5Caver23CharControllerComponent21SaveToProtobufMessageEPNS_5Proto9ComponentE
 * Demangled: Caver::CharControllerComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callers: 0
 *
 * Callees: 6
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F7570  google::protobuf::internal::ExtensionSet::MutableMessage(int,uchar,google::protobuf::MessageLite const&,google::protobuf::FieldDescriptor const*)
 *   0x00000000001F8570  operator new[](ulong)
 *   0x00000000001FBCB0  Caver::Proto::CharControllerComponent::default_instance(void)
 *   0x00000000001FF320  Caver::Component::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x0000000000201760  .memcpy
 *
 * Referenced strings: 90
 *   insn=0x000000000025A760 string=0x000000000025A764 "h$"
 *   insn=0x000000000025A764 string=0x000000000025A768 ""
 *   insn=0x000000000025A770 string=0x000000000025A774 "O"
 *   insn=0x000000000025A774 string=0x00000000001FBCB0 "0'"
 *   insn=0x000000000025A778 string=0x000000000025A77C "b"
 *   insn=0x000000000025A788 string=0x000000000025A78C "ys"
 *   insn=0x000000000025A78C string=0x00000000001F7570 "0'"
 *   insn=0x000000000025A794 string=0x000000000025A798 "iz@"
 *   insn=0x000000000025A798 string=0x000000000025A79C "uB"
 *   insn=0x000000000025A7A0 string=0x000000000025A7A4 "\n"
 *   insn=0x000000000025A7AC string=0x000000000025A7B0 "i"
 *   insn=0x000000000025A7B0 string=0x000000000025A7B4 "\n"
 *   insn=0x000000000025A7B8 string=0x000000000025A7BC "\n\t"
 *   insn=0x000000000025A7C0 string=0x000000000025A7C4 "i"
 *   insn=0x000000000025A7C8 string=0x000000000025A7CC "\n"
 *   insn=0x000000000025A7D4 string=0x000000000025A7D8 "i"
 *   insn=0x000000000025A7DC string=0x000000000025A7E0 "\n"
 *   insn=0x000000000025A7E4 string=0x000000000025A7E8 "i"
 *   insn=0x000000000025A7EC string=0x000000000025A7F0 "\n"
 *   insn=0x000000000025A7F4 string=0x000000000025A7F8 "i"
 *   insn=0x000000000025A7FC string=0x000000000025A800 "\n"
 *   insn=0x000000000025A804 string=0x000000000025A808 "i\nA"
 *   insn=0x000000000025A80C string=0x000000000025A810 "\n"
 *   insn=0x000000000025A814 string=0x000000000025A818 "i"A"
 *   insn=0x000000000025A81C string=0x000000000025A820 "\n!"
 *   insn=0x000000000025A824 string=0x000000000025A828 "i:A"
 *   insn=0x000000000025A82C string=0x000000000025A830 "\n%"
 *   insn=0x000000000025A834 string=0x000000000025A838 "iRA"
 *   insn=0x000000000025A83C string=0x000000000025A840 "\n)"
 *   insn=0x000000000025A844 string=0x000000000025A848 "ijA"
 *   insn=0x000000000025A84C string=0x000000000025A850 "\n-"
 *   insn=0x000000000025A854 string=0x000000000025A858 "i"
 *   insn=0x000000000025A85C string=0x000000000025A860 "\n1"
 *   insn=0x000000000025A860 string=0x000000000025A864 "5"
 *   insn=0x000000000025A868 string=0x000000000025A86C "i"
 *   insn=0x000000000025A874 string=0x000000000025A878 "i"
 *   insn=0x000000000025A880 string=0x000000000025A884 "h"
 *   insn=0x000000000025A884 string=0x000000000025A888 ""
 *   insn=0x000000000025A890 string=0x000000000025A924 "h"
 *   insn=0x000000000025A898 string=0x000000000025A89C ""
 *   insn=0x000000000025A8AC string=0x000000000025A8B0 "!"
 *   insn=0x000000000025A8B0 string=0x000000000025A8B4 ""
 *   insn=0x000000000025A8B4 string=0x000000000025A8B8 "\t{"
 *   insn=0x000000000025A8B8 string=0x000000000025A8BC "?"
 *   insn=0x000000000025A8BC string=0x000000000025A8C0 "("
 *   insn=0x000000000025A8C0 string=0x000000000025A8C4 "\t}@"
 *   insn=0x000000000025A8CC string=0x000000000025A8D0 ")}"
 *   insn=0x000000000025A8D4 string=0x000000000025A8D8 "}~"
 *   insn=0x000000000025A8E4 string=0x000000000025A8E8 ""w"
 *   insn=0x000000000025A8E8 string=0x000000000025A8EC """
 *   insn=0x000000000025A8E8 string=0x00000000001F8570 "0'"
 *   insn=0x000000000025A90C string=0x00000000001F4F60 "P'"
 *   insn=0x000000000025A914 string=0x000000000025A918 "\t"
 *   insn=0x000000000025A924 string=0x000000000025A928 "u"
 *   insn=0x000000000025A92C string=0x000000000025A930 ""
 *   insn=0x000000000025A938 string=0x000000000025A9CC "h"
 *   insn=0x000000000025A940 string=0x000000000025A944 ""
 *   insn=0x000000000025A954 string=0x000000000025A958 "!"
 *   insn=0x000000000025A958 string=0x000000000025A95C ""
 *   insn=0x000000000025A95C string=0x000000000025A960 "\t{"
 *   insn=0x000000000025A960 string=0x000000000025A964 "?"
 *   insn=0x000000000025A964 string=0x000000000025A968 "("
 *   insn=0x000000000025A968 string=0x000000000025A96C "\t}@"
 *   insn=0x000000000025A974 string=0x000000000025A978 ")}"
 *   insn=0x000000000025A97C string=0x000000000025A980 "}~"
 *   insn=0x000000000025A990 string=0x000000000025A994 """
 *   insn=0x000000000025A99C string=0x000000000025A9A0 "p"
 *   insn=0x000000000025A9B0 string=0x000000000025A9B4 "ki"
 *   insn=0x000000000025A9BC string=0x000000000025A9C0 "\t"
 *   insn=0x000000000025A9CC string=0x000000000025A9D0 "u"
 *   insn=0x000000000025A9D4 string=0x000000000025A9D8 ""
 *   insn=0x000000000025A9E0 string=0x000000000025AA74 "hnB"
 *   insn=0x000000000025A9E8 string=0x000000000025A9EC ""
 *   insn=0x000000000025A9FC string=0x000000000025AA00 "!"
 *   insn=0x000000000025AA00 string=0x000000000025AA04 ""
 *   insn=0x000000000025AA04 string=0x000000000025AA08 "\t{"
 *   insn=0x000000000025AA08 string=0x000000000025AA0C "?"
 *   insn=0x000000000025AA0C string=0x000000000025AA10 "("
 *   insn=0x000000000025AA10 string=0x000000000025AA14 "\t}@"
 *   insn=0x000000000025AA1C string=0x000000000025AA20 ")}"
 *   insn=0x000000000025AA24 string=0x000000000025AA28 "}~"
 *   insn=0x000000000025AA38 string=0x000000000025AA3C """
 *   insn=0x000000000025AA44 string=0x000000000025AA48 "F"
 *   insn=0x000000000025AA58 string=0x000000000025AA5C "Ai"
 *   insn=0x000000000025AA64 string=0x000000000025AA68 "\t"
 *   insn=0x000000000025AA74 string=0x000000000025AA78 "i"
 *   insn=0x000000000025AA7C string=0x000000000025AA80 "hzB"
 *   insn=0x000000000025AA84 string=0x000000000025AA88 "("
 *   insn=0x000000000025AA90 string=0x000000000025AA94 "h"
 *   insn=0x000000000025AA94 string=0x000000000025AA98 ")"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::CharControllerComponent::SaveToProtobufMessage(
        Caver::CharControllerComponent *this,
        Caver::Proto::Component *a2)
{
  Caver::Proto::CharControllerComponent *v3; // x0
  __int64 v4; // x20
  int v5; // w8
  int v6; // w9
  int v7; // w9
  int v8; // w9
  void *v9; // x23
  int v10; // w9
  int v11; // w9
  int v12; // w9
  int v13; // w9
  int v14; // w9
  int v15; // w9
  int v16; // w9
  int v17; // w9
  int v18; // w9
  int v19; // w9
  int v20; // w9
  int v21; // w0
  int v22; // w24
  int v23; // w21
  int v24; // w8
  void *v25; // x22
  __int64 v26; // x9
  __int64 v27; // x8
  unsigned __int64 v28; // x0
  void *v29; // x0
  __int64 v30; // x8
  int v31; // w0
  int v32; // w24
  int v33; // w21
  int v34; // w8
  void *v35; // x22
  __int64 v36; // x9
  __int64 v37; // x8
  unsigned __int64 v38; // x0
  void *v39; // x0
  __int64 v40; // x8
  int v41; // w0
  int v42; // w24
  int v43; // w21
  int v44; // w8
  void *v45; // x22
  __int64 v46; // x9
  __int64 v47; // x8
  unsigned __int64 v48; // x0
  void *v49; // x0
  __int64 v50; // x8
  int v51; // w9

  v3 = (Caver::Proto::CharControllerComponent *)Caver::Component::SaveToProtobufMessage(this, a2);
  Caver::Proto::CharControllerComponent::default_instance(v3);
  v4 = google::protobuf::internal::ExtensionSet::MutableMessage();
  v5 = *(_DWORD *)(v4 + 124);
  v6 = *((_DWORD *)this + 30);
  *(_DWORD *)(v4 + 124) = v5 | 1;
  *(_DWORD *)(v4 + 12) = v6;
  v7 = *((_DWORD *)this + 36);
  *(_DWORD *)(v4 + 124) = v5 | 3;
  *(_DWORD *)(v4 + 16) = v7;
  v8 = *((_DWORD *)this + 42);
  *(_DWORD *)(v4 + 124) = v5 | 7;
  v9 = (void *)(v4 + 88);
  *(_DWORD *)(v4 + 20) = v8;
  v10 = *((_DWORD *)this + 48);
  *(_DWORD *)(v4 + 124) = v5 | 0xF;
  *(_DWORD *)(v4 + 24) = v10;
  v11 = *((_DWORD *)this + 54);
  *(_DWORD *)(v4 + 124) = v5 | 0x1F;
  *(_DWORD *)(v4 + 28) = v11;
  v12 = *((_DWORD *)this + 60);
  *(_DWORD *)(v4 + 124) = v5 | 0x3F;
  *(_DWORD *)(v4 + 32) = v12;
  v13 = *((_DWORD *)this + 66);
  *(_DWORD *)(v4 + 124) = v5 | 0x7F;
  *(_DWORD *)(v4 + 36) = v13;
  v14 = *((_DWORD *)this + 72);
  *(_DWORD *)(v4 + 124) = v5 | 0xFF;
  *(_DWORD *)(v4 + 40) = v14;
  v15 = *((_DWORD *)this + 78);
  *(_DWORD *)(v4 + 124) = v5 | 0x1FF;
  *(_DWORD *)(v4 + 44) = v15;
  v16 = *((_DWORD *)this + 84);
  *(_DWORD *)(v4 + 124) = v5 | 0x3FF;
  *(_DWORD *)(v4 + 48) = v16;
  v17 = *((_DWORD *)this + 90);
  *(_DWORD *)(v4 + 124) = v5 | 0x7FF;
  *(_DWORD *)(v4 + 52) = v17;
  v18 = *((_DWORD *)this + 96);
  *(_DWORD *)(v4 + 124) = v5 | 0xFFF;
  *(_DWORD *)(v4 + 56) = v18;
  v19 = *((_DWORD *)this + 104);
  *(_DWORD *)(v4 + 124) = v5 | 0x1FFF;
  *(_DWORD *)(v4 + 60) = v19;
  v20 = *((_DWORD *)this + 110);
  *(_DWORD *)(v4 + 124) = v5 | 0x3FFF;
  *(_DWORD *)(v4 + 64) = v20;
  if ( (*(unsigned int (__fastcall **)(char *))(*((_QWORD *)this + 58) + 8LL))((char *)this + 464) )
  {
    v21 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 58) + 8LL))((char *)this + 464);
    v22 = *(_DWORD *)(v4 + 80);
    v23 = v21;
    if ( v22 == *(_DWORD *)(v4 + 84) )
    {
      v24 = 2 * v22 < v22 + 1 ? v22 + 1 : 2 * v22;
      v25 = *(void **)(v4 + 72);
      v26 = ((unsigned __int64)v24 * (unsigned __int128)4uLL) >> 64;
      *(_DWORD *)(v4 + 84) = v24;
      v27 = 4LL * v24;
      v28 = v26 ? -1LL : v27;
      v29 = (void *)operator new[](v28);
      *(_QWORD *)(v4 + 72) = v29;
      memcpy(v29, v25, 4LL * v22);
      if ( v25 != v9 )
      {
        if ( v25 )
        {
          operator delete[](v25);
          v22 = *(_DWORD *)(v4 + 80);
        }
      }
    }
    v30 = *(_QWORD *)(v4 + 72);
    *(_DWORD *)(v4 + 80) = v22 + 1;
    *(_DWORD *)(v30 + 4LL * v22) = v23;
  }
  if ( (*(unsigned int (__fastcall **)(char *))(*((_QWORD *)this + 61) + 8LL))((char *)this + 488) )
  {
    v31 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 61) + 8LL))((char *)this + 488);
    v32 = *(_DWORD *)(v4 + 80);
    v33 = v31;
    if ( v32 == *(_DWORD *)(v4 + 84) )
    {
      v34 = 2 * v32 < v32 + 1 ? v32 + 1 : 2 * v32;
      v35 = *(void **)(v4 + 72);
      v36 = ((unsigned __int64)v34 * (unsigned __int128)4uLL) >> 64;
      *(_DWORD *)(v4 + 84) = v34;
      v37 = 4LL * v34;
      v38 = v36 ? -1LL : v37;
      v39 = (void *)operator new[](v38);
      *(_QWORD *)(v4 + 72) = v39;
      memcpy(v39, v35, 4LL * v32);
      if ( v35 != v9 )
      {
        if ( v35 )
        {
          operator delete[](v35);
          v32 = *(_DWORD *)(v4 + 80);
        }
      }
    }
    v40 = *(_QWORD *)(v4 + 72);
    *(_DWORD *)(v4 + 80) = v32 + 1;
    *(_DWORD *)(v40 + 4LL * v32) = v33;
  }
  if ( (*(unsigned int (__fastcall **)(char *))(*((_QWORD *)this + 64) + 8LL))((char *)this + 512) )
  {
    v41 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 64) + 8LL))((char *)this + 512);
    v42 = *(_DWORD *)(v4 + 80);
    v43 = v41;
    if ( v42 == *(_DWORD *)(v4 + 84) )
    {
      if ( 2 * v42 < v42 + 1 )
        v44 = v42 + 1;
      else
        v44 = 2 * v42;
      v45 = *(void **)(v4 + 72);
      v46 = ((unsigned __int64)v44 * (unsigned __int128)4uLL) >> 64;
      *(_DWORD *)(v4 + 84) = v44;
      v47 = 4LL * v44;
      if ( v46 )
        v48 = -1;
      else
        v48 = v47;
      v49 = (void *)operator new[](v48);
      *(_QWORD *)(v4 + 72) = v49;
      memcpy(v49, v45, 4LL * v42);
      if ( v45 != v9 && v45 )
      {
        operator delete[](v45);
        v42 = *(_DWORD *)(v4 + 80);
      }
    }
    v50 = *(_QWORD *)(v4 + 72);
    *(_DWORD *)(v4 + 80) = v42 + 1;
    *(_DWORD *)(v50 + 4LL * v42) = v43;
  }
  *(_DWORD *)(v4 + 108) = *((_DWORD *)this + 155);
  *(_DWORD *)(v4 + 104) = *((_DWORD *)this + 158);
  v51 = *(_DWORD *)(v4 + 124);
  *(_QWORD *)(v4 + 112) = *(_QWORD *)((char *)this + 636);
  *(_DWORD *)(v4 + 120) = *((_DWORD *)this + 161);
  *(_DWORD *)(v4 + 124) = v51 | 0xF8000;
}

