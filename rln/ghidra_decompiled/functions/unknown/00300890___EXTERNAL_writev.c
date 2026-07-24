/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00300890
 * Function: <EXTERNAL>::writev
 * Signature: ssize_t writev(int __fd, iovec * __iovec, int __count)
 * Thunk: true
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t writev(int __fd,iovec *__iovec,int __count)

{
  ssize_t sVar1;
  
  sVar1 = (*(code *)PTR_writev_007e2c78)(__fd,__iovec,__count);
  return sVar1;
}


