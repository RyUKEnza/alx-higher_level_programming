#include <Python.h>
#include <stdio.h>

void print_python_bytes(PyObject *p) {
	printf("[.] bytes object info\n");
	if (!PyBytes_Check(p)) {
		printf("  [ERROR] Invalid Bytes Object\n");
		return;
	}
	printf("  size: %ld\n", PyBytes_Size(p));
	printf("  trying string: %s\n", PyBytes_AsString(p));
	printf("  first 10 bytes: ");
	for (Py_ssize_t i = 0; i < PyBytes_Size(p) && i < 10; ++i) {
		printf("%02x ", ((unsigned char *)PyBytes_AsString(p))[i]);
	}
	printf("\n");
}

void print_python_list(PyObject *p) {
	printf("[*] Python list info\n");
	printf("[*] Size of the Python List = %ld\n", PyList_Size(p));
	printf("[*] Allocated = %ld\n", ((PyListObject *)p)->allocated);
	for (Py_ssize_t i = 0; i < PyList_Size(p); ++i) {
		printf("Element %ld: %s\n", i, PyBytes_Check(PyList_GetItem(p, i)) ? "bytes" : "int");
		if (PyBytes_Check(PyList_GetItem(p, i))) {
			print_python_bytes(PyList_GetItem(p, i));
		}
	}
}
