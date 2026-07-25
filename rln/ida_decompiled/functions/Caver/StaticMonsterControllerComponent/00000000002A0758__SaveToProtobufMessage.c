/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002A0758
 * Mangled: _ZNK5Caver32StaticMonsterControllerComponent21SaveToProtobufMessageEPNS_5Proto9ComponentE
 * Demangled: Caver::StaticMonsterControllerComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callers: 0
 *
 * Callees: 6
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F57F0  Caver::MonsterControllerComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *   0x00000000001F7570  google::protobuf::internal::ExtensionSet::MutableMessage(int,uchar,google::protobuf::MessageLite const&,google::protobuf::FieldDescriptor const*)
 *   0x00000000001F8570  operator new[](ulong)
 *   0x00000000001F9750  Caver::Proto::StaticMonsterControllerComponent::default_instance(void)
 *   0x0000000000201760  .memcpy
 *
 * Referenced strings: 51
 *   insn=0x00000000002A0778 string=0x00000000002A077C "(""
 *   insn=0x00000000002A0778 string=0x00000000001F57F0 "P'"
 *   insn=0x00000000002A077C string=0x00000000002A0780 ""
 *   insn=0x00000000002A0780 string=0x00000000002A0784 "s""
 *   insn=0x00000000002A078C string=0x00000000001F9750 "0'"
 *   insn=0x00000000002A0790 string=0x00000000002A0794 "b"
 *   insn=0x00000000002A07A0 string=0x00000000002A07A4 "s["
 *   insn=0x00000000002A07A4 string=0x00000000001F7570 "0'"
 *   insn=0x00000000002A07A8 string=0x00000000002A07AC "h2@"
 *   insn=0x00000000002A07B4 string=0x00000000002A07B8 "w"
 *   insn=0x00000000002A07B8 string=0x00000000002A07BC ""
 *   insn=0x00000000002A07BC string=0x00000000002A07C0 "h2"
 *   insn=0x00000000002A07C0 string=0x00000000002A07C4 "i"
 *   insn=0x00000000002A07C8 string=0x00000000002A07CC ""
 *   insn=0x00000000002A07E0 string=0x00000000002A07E4 ""
 *   insn=0x00000000002A07E8 string=0x00000000002A07EC "x"C)"
 *   insn=0x00000000002A07F4 string=0x00000000002A07F8 "!"
 *   insn=0x00000000002A07F8 string=0x00000000002A07FC ""
 *   insn=0x00000000002A07F8 string=0x00000000002A085C "h\n@"
 *   insn=0x00000000002A07FC string=0x00000000002A0800 "\t{"
 *   insn=0x00000000002A0800 string=0x00000000002A0804 "?"
 *   insn=0x00000000002A0804 string=0x00000000002A0808 "("
 *   insn=0x00000000002A0808 string=0x00000000002A080C "\t}@"
 *   insn=0x00000000002A0810 string=0x00000000002A0814 "v\n@"
 *   insn=0x00000000002A0814 string=0x00000000002A0818 ")}"
 *   insn=0x00000000002A0818 string=0x00000000002A081C "h"
 *   insn=0x00000000002A081C string=0x00000000002A0820 "}~"
 *   insn=0x00000000002A082C string=0x00000000002A0830 "P_"
 *   insn=0x00000000002A0830 string=0x00000000002A0834 """
 *   insn=0x00000000002A0830 string=0x00000000001F8570 "0'"
 *   insn=0x00000000002A0838 string=0x00000000002A083C "`\n"
 *   insn=0x00000000002A0854 string=0x00000000002A0858 "x"
 *   insn=0x00000000002A0854 string=0x00000000001F4F60 "P'"
 *   insn=0x00000000002A085C string=0x00000000002A0860 "\t"
 *   insn=0x00000000002A0860 string=0x00000000002A0864 "i"
 *   insn=0x00000000002A0874 string=0x00000000002A0878 ""
 *   insn=0x00000000002A0888 string=0x00000000002A088C ""
 *   insn=0x00000000002A0890 string=0x00000000002A0894 "v"C)"
 *   insn=0x00000000002A089C string=0x00000000002A08A0 "!"
 *   insn=0x00000000002A08A0 string=0x00000000002A0904 "h\n@"
 *   insn=0x00000000002A08A8 string=0x00000000002A08AC "?"
 *   insn=0x00000000002A08AC string=0x00000000002A08B0 "("
 *   insn=0x00000000002A08B0 string=0x00000000002A08B4 "\t}@"
 *   insn=0x00000000002A08B8 string=0x00000000002A08BC "u\n@"
 *   insn=0x00000000002A08BC string=0x00000000002A08C0 ")}"
 *   insn=0x00000000002A08C0 string=0x00000000002A08C4 "h"
 *   insn=0x00000000002A08C4 string=0x00000000002A08C8 "}~"
 *   insn=0x00000000002A08D4 string=0x00000000002A08D8 "&_"
 *   insn=0x00000000002A08E0 string=0x00000000002A08E4 "`\n"
 *   insn=0x00000000002A08FC string=0x00000000002A0900 "v"
 *   insn=0x00000000002A0908 string=0x00000000002A090C "i"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::StaticMonsterControllerComponent::SaveToProtobufMessage(
        Caver::StaticMonsterControllerComponent *this,
        Caver::Proto::Component *a2)
{
  Caver::Proto::StaticMonsterControllerComponent *v3; // x0
  __int64 v4; // x19
  int v5; // w9
  void *v6; // x23
  int v7; // w0
  int v8; // w24
  int v9; // w21
  int v10; // w8
  void *v11; // x22
  __int64 v12; // x9
  __int64 v13; // x8
  unsigned __int64 v14; // x0
  void *v15; // x0
  __int64 v16; // x8
  __int64 v17; // x8
  char *v18; // x20
  int v19; // w0
  int v20; // w22
  int v21; // w20
  int v22; // w8
  void *v23; // x21
  __int64 v24; // x9
  __int64 v25; // x8
  unsigned __int64 v26; // x0
  void *v27; // x0
  __int64 v28; // x8

  v3 = (Caver::Proto::StaticMonsterControllerComponent *)Caver::MonsterControllerComponent::SaveToProtobufMessage(
                                                           this,
                                                           a2);
  Caver::Proto::StaticMonsterControllerComponent::default_instance(v3);
  v4 = google::protobuf::internal::ExtensionSet::MutableMessage();
  v5 = *((_DWORD *)this + 54);
  v6 = (void *)(v4 + 32);
  *(_DWORD *)(v4 + 48) |= 1u;
  *(_DWORD *)(v4 + 12) = v5;
  if ( (*(unsigned int (__fastcall **)(char *))(*((_QWORD *)this + 29) + 8LL))((char *)this + 232) )
  {
    v7 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 29) + 8LL))((char *)this + 232);
    v8 = *(_DWORD *)(v4 + 24);
    v9 = v7;
    if ( v8 == *(_DWORD *)(v4 + 28) )
    {
      v10 = 2 * v8 < v8 + 1 ? v8 + 1 : 2 * v8;
      v11 = *(void **)(v4 + 16);
      v12 = ((unsigned __int64)v10 * (unsigned __int128)4uLL) >> 64;
      *(_DWORD *)(v4 + 28) = v10;
      v13 = 4LL * v10;
      v14 = v12 ? -1LL : v13;
      v15 = (void *)operator new[](v14);
      *(_QWORD *)(v4 + 16) = v15;
      memcpy(v15, v11, 4LL * v8);
      if ( v11 != v6 )
      {
        if ( v11 )
        {
          operator delete[](v11);
          v8 = *(_DWORD *)(v4 + 24);
        }
      }
    }
    v16 = *(_QWORD *)(v4 + 16);
    *(_DWORD *)(v4 + 24) = v8 + 1;
    *(_DWORD *)(v16 + 4LL * v8) = v9;
  }
  v17 = *((_QWORD *)this + 32);
  v18 = (char *)this + 256;
  if ( (*(unsigned int (__fastcall **)(char *))(v17 + 8))(v18) )
  {
    v19 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v18 + 8LL))(v18);
    v20 = *(_DWORD *)(v4 + 24);
    v21 = v19;
    if ( v20 == *(_DWORD *)(v4 + 28) )
    {
      if ( 2 * v20 < v20 + 1 )
        v22 = v20 + 1;
      else
        v22 = 2 * v20;
      v23 = *(void **)(v4 + 16);
      v24 = ((unsigned __int64)v22 * (unsigned __int128)4uLL) >> 64;
      *(_DWORD *)(v4 + 28) = v22;
      v25 = 4LL * v22;
      if ( v24 )
        v26 = -1;
      else
        v26 = v25;
      v27 = (void *)operator new[](v26);
      *(_QWORD *)(v4 + 16) = v27;
      memcpy(v27, v23, 4LL * v20);
      if ( v23 != v6 )
      {
        if ( v23 )
        {
          operator delete[](v23);
          v20 = *(_DWORD *)(v4 + 24);
        }
      }
    }
    v28 = *(_QWORD *)(v4 + 16);
    *(_DWORD *)(v4 + 24) = v20 + 1;
    *(_DWORD *)(v28 + 4LL * v20) = v21;
  }
}

