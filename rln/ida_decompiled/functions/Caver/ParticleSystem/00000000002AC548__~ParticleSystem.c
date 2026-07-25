/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002AC548
 * Mangled: _ZN5Caver14ParticleSystemD2Ev
 * Demangled: Caver::ParticleSystem::~ParticleSystem()
 *
 * Callers: 1
 *   0x00000000001FD470  Caver::ParticleSystem::~ParticleSystem()
 *
 * Callees: 6
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x0000000000200560  Caver::VertexArrayObject::~VertexArrayObject()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000002AC6DC  Caver::ParticleFieldComponent::ParticleFieldComponent(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 47
 *   insn=0x00000000002AC558 string=0x00000000002AC55C "`""
 *   insn=0x00000000002AC560 string=0x00000000002AC564 "`"
 *   insn=0x00000000002AC564 string=0x00000000002AC568 "@"
 *   insn=0x00000000002AC568 string=0x00000000002AC56C "}""
 *   insn=0x00000000002AC568 string=0x00000000002AC570 "t"
 *   insn=0x00000000002AC56C string=0x00000000001F4F60 "P'"
 *   insn=0x00000000002AC578 string=0x00000000002AC5B0 "t"
 *   insn=0x00000000002AC580 string=0x00000000002AC584 "@"
 *   insn=0x00000000002AC584 string=0x00000000002AC588 ""
 *   insn=0x00000000002AC588 string=0x00000000002AC58C ""
 *   insn=0x00000000002AC590 string=0x00000000002AC594 ""
 *   insn=0x00000000002AC594 string=0x00000000002AC598 ""
 *   insn=0x00000000002AC5A8 string=0x00000000002AC5AC "t"
 *   insn=0x00000000002AC5B0 string=0x00000000002AC5BC "`"
 *   insn=0x00000000002AC5B4 string=0x00000000002AC5B8 ">+"
 *   insn=0x00000000002AC5B8 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000002AC5C0 string=0x00000000002AC5C4 "@"
 *   insn=0x00000000002AC5C4 string=0x00000000002AC5C8 ""
 *   insn=0x00000000002AC5C8 string=0x00000000002AC5CC ""
 *   insn=0x00000000002AC5D0 string=0x00000000002AC5E4 ""
 *   insn=0x00000000002AC5F4 string=0x00000000002AC5F8 " "
 *   insn=0x00000000002AC600 string=0x00000000002AC604 "h"
 *   insn=0x00000000002AC604 string=0x00000000002AC610 "h"
 *   insn=0x00000000002AC608 string=0x00000000002AC60C "U""
 *   insn=0x00000000002AC620 string=0x00000000002AC660 "5"
 *   insn=0x00000000002AC628 string=0x00000000002AC62C " "
 *   insn=0x00000000002AC62C string=0x00000000002AC630 "\n@"
 *   insn=0x00000000002AC630 string=0x00000000002AC634 "J"
 *   insn=0x00000000002AC634 string=0x00000000002AC638 "\n"
 *   insn=0x00000000002AC63C string=0x00000000002AC640 "\t"
 *   insn=0x00000000002AC640 string=0x00000000002AC644 ")"
 *   insn=0x00000000002AC644 string=0x00000000002AC648 " "
 *   insn=0x00000000002AC650 string=0x00000000002AC654 "?"
 *   insn=0x00000000002AC658 string=0x00000000002AC65C "u"
 *   insn=0x00000000002AC660 string=0x00000000002AC6A4 "`"
 *   insn=0x00000000002AC670 string=0x00000000002AC674 "h"
 *   insn=0x00000000002AC678 string=0x00000000002AC67C "4"
 *   insn=0x00000000002AC680 string=0x00000000002AC684 "+"
 *   insn=0x00000000002AC688 string=0x00000000002AC68C "0"
 *   insn=0x00000000002AC68C string=0x00000000002AC690 "h"
 *   insn=0x00000000002AC694 string=0x00000000002AC698 "h"
 *   insn=0x00000000002AC6A8 string=0x00000000002AC6AC "@"
 *   insn=0x00000000002AC6AC string=0x00000000002AC6B0 ""
 *   insn=0x00000000002AC6B0 string=0x00000000002AC6B4 ""
 *   insn=0x00000000002AC6B8 string=0x00000000002AC6BC ""
 *   insn=0x00000000002AC6BC string=0x00000000002AC6C0 ""
 *   insn=0x00000000002AC6C8 string=0x00000000002AC6CC "~T"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::ParticleSystem::~ParticleSystem(Caver::ParticleSystem *this)
{
  void *v2; // x0
  _QWORD *v3; // x20
  _QWORD *v4; // x21
  _DWORD *v5; // x0
  int v6; // w8
  _DWORD *v7; // x0
  int v8; // w8

  Caver::VertexArrayObject::~VertexArrayObject((Caver::ParticleSystem *)((char *)this + 72));
  v2 = (void *)*((_QWORD *)this + 5);
  if ( v2 )
    operator delete[](v2);
  v3 = (_QWORD *)*((_QWORD *)this + 1);
  v4 = (_QWORD *)*((_QWORD *)this + 2);
  if ( v3 != v4 )
  {
    do
    {
      v5 = (_DWORD *)*v3;
      if ( *v3 )
      {
        v6 = v5[2] - 1;
        v5[2] = v6;
        if ( !v6 )
          (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v5 + 8LL))(v5);
      }
      v3 += 11;
    }
    while ( v4 != v3 );
    v3 = (_QWORD *)*((_QWORD *)this + 1);
  }
  if ( v3 )
    operator delete(v3);
  v7 = *(_DWORD **)this;
  if ( *(_QWORD *)this )
  {
    v8 = v7[2] - 1;
    v7[2] = v8;
    if ( !v8 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v7 + 8LL))(v7);
  }
}

