/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004601F8
 * Mangled: _ZNK5Caver14ObjectTemplate21SaveToProtobufMessageEPNS_5Proto14ObjectTemplateE
 * Demangled: Caver::ObjectTemplate::SaveToProtobufMessage(Caver::Proto::ObjectTemplate *)
 *
 * Callers: 1
 *   0x0000000000202390  Caver::ObjectTemplate::SaveToProtobufMessage(Caver::Proto::ObjectTemplate *)
 *
 * Callees: 6
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FBA40  Caver::Proto::SceneObject::SceneObject(void)
 *   0x0000000000202170  Caver::SceneObject::SaveToProtobufMessage(Caver::Proto::SceneObject *)
 *   0x0000000000460278  Caver::ObjectTemplate::Process(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 12
 *   insn=0x0000000000460208 string=0x000000000046020C "h"
 *   insn=0x000000000046020C string=0x0000000000460210 "u\n@"
 *   insn=0x0000000000460214 string=0x0000000000460218 ""
 *   insn=0x0000000000460218 string=0x000000000046021C "h"
 *   insn=0x0000000000460228 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000460230 string=0x0000000000460234 "u\n"
 *   insn=0x0000000000460230 string=0x00000000001FBA40 "0'"
 *   insn=0x0000000000460240 string=0x0000000000460244 "h"
 *   insn=0x0000000000460248 string=0x000000000046024C ""
 *   insn=0x000000000046024C string=0x0000000000460250 "i""
 *   insn=0x000000000046026C string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000460274 string=0x0000000000460278 "2g"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::ObjectTemplate::SaveToProtobufMessage(
        Caver::ObjectTemplate *this,
        Caver::Proto::ObjectTemplate *a2)
{
  Caver::Proto::SceneObject *v3; // x21
  int v5; // w8

  v3 = (Caver::Proto::SceneObject *)*((_QWORD *)a2 + 2);
  *((_DWORD *)a2 + 7) |= 1u;
  if ( !v3 )
  {
    v3 = (Caver::Proto::SceneObject *)operator new(0x90u);
    Caver::Proto::SceneObject::SceneObject(v3);
    *((_QWORD *)a2 + 2) = v3;
  }
  Caver::SceneObject::SaveToProtobufMessage(this, v3);
  v5 = *((_DWORD *)a2 + 7) | 2;
  *((_DWORD *)a2 + 6) = *((_DWORD *)this + 76);
  *((_DWORD *)a2 + 7) = v5;
}

