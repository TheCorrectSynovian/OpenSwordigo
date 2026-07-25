/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002B80BC
 * Mangled: _ZN5Caver11MeshBuilderC2Ev
 * Demangled: Caver::MeshBuilder::MeshBuilder(void)
 *
 * Callers: 1
 *   0x0000000000203610  Caver::MeshBuilder::MeshBuilder(void)
 *
 * Callees: 9
 *   0x00000000001F39E0  Caver::Mesh::Mesh(void)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FAB90  boost::detail::shared_count::shared_count<Caver::Mesh>(Caver::Mesh *)
 *   0x0000000000202950  boost::detail::sp_enable_shared_from_this(...)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000002B8308  Caver::GroundMeshComponent::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 46
 *   insn=0x00000000002B80D0 string=0x00000000002B80D4 "W"
 *   insn=0x00000000002B810C string=0x00000000002B8110 "4"
 *   insn=0x00000000002B8110 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000002B8118 string=0x00000000002B811C "1"
 *   insn=0x00000000002B811C string=0x00000000001F39E0 "P'"
 *   insn=0x00000000002B8130 string=0x00000000001FAB90 "0'"
 *   insn=0x00000000002B8140 string=0x00000000002B8144 "hR@"
 *   insn=0x00000000002B8150 string=0x00000000002B8154 "i""
 *   insn=0x00000000002B8158 string=0x00000000002B815C "4"
 *   insn=0x00000000002B8160 string=0x00000000002B8164 ""
 *   insn=0x00000000002B8170 string=0x00000000002B8174 "\t@"
 *   insn=0x00000000002B8180 string=0x00000000002B8184 ""
 *   insn=0x00000000002B8190 string=0x00000000002B8194 "@"
 *   insn=0x00000000002B81AC string=0x00000000002B81C8 "B"
 *   insn=0x00000000002B81C8 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000002B81D4 string=0x00000000002B81D8 "6"
 *   insn=0x00000000002B81D8 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000002B81E0 string=0x00000000002B81F4 "/"
 *   insn=0x00000000002B81EC string=0x00000000002B81F0 "@"
 *   insn=0x00000000002B81FC string=0x00000000002B8200 "s"
 *   insn=0x00000000002B81FC string=0x00000000002B820C ")"
 *   insn=0x00000000002B8204 string=0x00000000002B8218 "h"
 *   insn=0x00000000002B820C string=0x00000000002B8210 "s"
 *   insn=0x00000000002B8210 string=0x00000000002B8214 "3"
 *   insn=0x00000000002B8218 string=0x00000000002B821C ""
 *   insn=0x00000000002B821C string=0x00000000002B8220 "h"
 *   insn=0x00000000002B8224 string=0x00000000002B8228 "h"
 *   insn=0x00000000002B8228 string=0x00000000002B822C "\t@"
 *   insn=0x00000000002B8234 string=0x00000000002B8238 "h\n@"
 *   insn=0x00000000002B8238 string=0x00000000002B823C ""
 *   insn=0x00000000002B823C string=0x00000000002B8240 "h\n"
 *   insn=0x00000000002B8244 string=0x00000000002B8248 "h"
 *   insn=0x00000000002B8248 string=0x00000000002B824C "@"
 *   insn=0x00000000002B825C string=0x00000000002B8260 ";X"
 *   insn=0x00000000002B8274 string=0x00000000002B8278 "`"
 *   insn=0x00000000002B8278 string=0x00000000002B827C "@"
 *   insn=0x00000000002B827C string=0x00000000002B8284 "`"
 *   insn=0x00000000002B8284 string=0x00000000002B8288 "@"
 *   insn=0x00000000002B8288 string=0x00000000002B828C "\t"
 *   insn=0x00000000002B8288 string=0x00000000002B8290 "t"
 *   insn=0x00000000002B8290 string=0x00000000002B8294 "4"
 *   insn=0x00000000002B8298 string=0x00000000002B829C ""
 *   insn=0x00000000002B82A8 string=0x00000000002B82AC "\t@"
 *   insn=0x00000000002B82B8 string=0x00000000002B82BC ""
 *   insn=0x00000000002B82C8 string=0x00000000002B82CC "@"
 *   insn=0x00000000002B8300 string=0x00000000002B8304 "p%"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::MeshBuilder::MeshBuilder(Caver::MeshBuilder *this)
{
  Caver::Mesh *v2; // x20
  _QWORD *v3; // x20
  __int64 v4; // x8
  __int64 v5; // x8
  Caver::Mesh *v6; // [xsp+28h] [xbp-48h]
  __int64 v7; // [xsp+30h] [xbp-40h]

  _ReadStatusReg(TPIDR_EL0);
  *((_QWORD *)this + 3) = 0;
  *((_QWORD *)this + 7) = 0;
  *(_QWORD *)this = 0;
  *((_QWORD *)this + 1) = 0;
  *((_DWORD *)this + 4) = 0;
  *((_QWORD *)this + 4) = 0;
  *((_QWORD *)this + 5) = 0;
  *((_DWORD *)this + 12) = 0;
  *((_QWORD *)this + 8) = 0;
  *((_QWORD *)this + 9) = 0;
  *((_DWORD *)this + 20) = 0;
  v2 = (Caver::Mesh *)operator new(0x160u);
  Caver::Mesh::Mesh(v2);
  v6 = v2;
  boost::detail::shared_count::shared_count<Caver::Mesh>();
  boost::detail::sp_enable_shared_from_this();
  v3 = (_QWORD *)*((_QWORD *)this + 1);
  *(_QWORD *)this = v6;
  *((_QWORD *)this + 1) = v7;
  if ( v3 )
  {
    v4 = v3[1] - 1LL;
    v3[1] = v4;
    if ( !v4 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v3 + 16LL))(v3);
      v5 = v3[2] - 1LL;
      v3[2] = v5;
      if ( !v5 )
        (*(void (__fastcall **)(_QWORD *))(*v3 + 24LL))(v3);
    }
  }
}

