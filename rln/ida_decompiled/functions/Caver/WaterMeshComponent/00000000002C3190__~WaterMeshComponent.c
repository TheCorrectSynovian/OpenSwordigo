/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002C3190
 * Mangled: _ZN5Caver18WaterMeshComponentD2Ev
 * Demangled: Caver::WaterMeshComponent::~WaterMeshComponent()
 *
 * Callers: 1
 *   0x00000000001F69E0  Caver::WaterMeshComponent::~WaterMeshComponent()
 *
 * Callees: 7
 *   0x00000000001F69E0  Caver::WaterMeshComponent::~WaterMeshComponent()
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FA4D0  Caver::Component::~Component()
 *   0x0000000000200560  Caver::VertexArrayObject::~VertexArrayObject()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000002C330C  Caver::WaterMeshComponent::Clone(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 53
 *   insn=0x00000000002C3198 string=0x00000000002C319C "!"
 *   insn=0x00000000002C319C string=0x00000000002C31A0 "YD"
 *   insn=0x00000000002C31A4 string=0x00000000002C31A8 "`"
 *   insn=0x00000000002C31A8 string=0x00000000002C31AC "\n"
 *   insn=0x00000000002C31AC string=0x00000000002C31B0 "\tA"
 *   insn=0x00000000002C31B0 string=0x00000000002C31B4 ""
 *   insn=0x00000000002C31B4 string=0x00000000002C31B8 "@"
 *   insn=0x00000000002C31BC string=0x00000000002C31C0 "i"
 *   insn=0x00000000002C31C0 string=0x00000000002C31C4 "`"
 *   insn=0x00000000002C31C8 string=0x00000000002C31CC "!"
 *   insn=0x00000000002C31CC string=0x00000000002C31D0 "`V@"
 *   insn=0x00000000002C31D0 string=0x00000000002C31D4 "=D"
 *   insn=0x00000000002C31D4 string=0x00000000002C31D8 "A"
 *   insn=0x00000000002C31D8 string=0x00000000002C31DC "hN"
 *   insn=0x00000000002C31E0 string=0x00000000002C31E4 "@"
 *   insn=0x00000000002C31E0 string=0x00000000002C3200 "!"
 *   insn=0x00000000002C31E4 string=0x00000000002C31E8 ""
 *   insn=0x00000000002C31E8 string=0x00000000002C31EC ""
 *   insn=0x00000000002C31F0 string=0x00000000002C31F4 ""
 *   insn=0x00000000002C31F4 string=0x00000000002C31F8 ""
 *   insn=0x00000000002C3200 string=0x00000000002C3204 "`B@"
 *   insn=0x00000000002C3204 string=0x00000000002C3208 ""
 *   insn=0x00000000002C3208 string=0x00000000002C320C "A"
 *   insn=0x00000000002C320C string=0x00000000002C3210 "h:"
 *   insn=0x00000000002C3214 string=0x00000000002C3218 "@"
 *   insn=0x00000000002C3218 string=0x00000000002C321C ""
 *   insn=0x00000000002C321C string=0x00000000002C3220 ""
 *   insn=0x00000000002C3224 string=0x00000000002C3228 ""
 *   insn=0x00000000002C3228 string=0x00000000002C322C ""
 *   insn=0x00000000002C3240 string=0x00000000001FA4D0 "0'"
 *   insn=0x00000000002C3250 string=0x00000000002C328C "!"
 *   insn=0x00000000002C3258 string=0x00000000002C325C "`V@"
 *   insn=0x00000000002C325C string=0x00000000002C3260 "=D"
 *   insn=0x00000000002C3260 string=0x00000000002C3264 "A"
 *   insn=0x00000000002C3264 string=0x00000000002C3268 "hN"
 *   insn=0x00000000002C326C string=0x00000000002C3270 "@"
 *   insn=0x00000000002C3270 string=0x00000000002C3274 ""
 *   insn=0x00000000002C3274 string=0x00000000002C3278 ""
 *   insn=0x00000000002C327C string=0x00000000002C3280 ""
 *   insn=0x00000000002C3280 string=0x00000000002C3284 ""
 *   insn=0x00000000002C328C string=0x00000000002C3290 "`B@"
 *   insn=0x00000000002C3290 string=0x00000000002C3294 ""
 *   insn=0x00000000002C3294 string=0x00000000002C3298 "A"
 *   insn=0x00000000002C3298 string=0x00000000002C329C "h:"
 *   insn=0x00000000002C32A0 string=0x00000000002C32A4 "@"
 *   insn=0x00000000002C32A4 string=0x00000000002C32A8 ""
 *   insn=0x00000000002C32A8 string=0x00000000002C32AC ""
 *   insn=0x00000000002C32B0 string=0x00000000002C32B4 ""
 *   insn=0x00000000002C32B4 string=0x00000000002C32B8 ""
 *   insn=0x00000000002C32C8 string=0x00000000002C32CC "~"
 *   insn=0x00000000002C32E4 string=0x00000000001F69E0 "0'"
 *   insn=0x00000000002C32F4 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000002C3304 string=0x00000000002C3308 "o"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::WaterMeshComponent::~WaterMeshComponent(Caver::WaterMeshComponent *this)
{
  __int128 v2; // q0
  _DWORD *v3; // x0
  int v4; // w8
  _DWORD *v5; // x0
  int v6; // w8

  *(_QWORD *)&v2 = &off_6C5038;
  *((_QWORD *)&v2 + 1) = &off_6C5078;
  *(_QWORD *)this = off_6C4F20;
  *((_OWORD *)this + 1) = v2;
  Caver::VertexArrayObject::~VertexArrayObject((Caver::WaterMeshComponent *)((char *)this + 224));
  v3 = (_DWORD *)*((_QWORD *)this + 21);
  *((_QWORD *)this + 19) = off_6C3CD8;
  if ( v3 )
  {
    v4 = v3[2] - 1;
    v3[2] = v4;
    if ( !v4 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v3 + 8LL))(v3);
  }
  v5 = (_DWORD *)*((_QWORD *)this + 16);
  *((_QWORD *)this + 14) = &off_6BEDF8;
  if ( v5 )
  {
    v6 = v5[2] - 1;
    v5[2] = v6;
    if ( !v6 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v5 + 8LL))(v5);
  }
  Caver::Component::~Component(this);
}

