/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004C8B90
 * Mangled: _ZN5Caver7Texture9SharedPtrEv
 * Demangled: Caver::Texture::SharedPtr(void)
 *
 * Callers: 2
 *   0x00000000001F9060  Caver::Texture::SharedPtr(void)
 *   0x00000000004C8B58  Caver::Texture::~Texture()
 *
 * Callees: 0
 *
 * Referenced strings: 3
 *   insn=0x00000000004C8B94 string=0x00000000004C8B98 "@"
 *   insn=0x00000000004C8B98 string=0x00000000004C8B9C ""
 *   insn=0x00000000004C8B9C string=0x00000000004C8BA0 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __usercall Caver::Texture::SharedPtr@<X0>(__int64 this@<X0>, _QWORD *a2@<X8>)
{
  *a2 = this;
  if ( this )
    ++*(_DWORD *)(this + 8);
  return this;
}

