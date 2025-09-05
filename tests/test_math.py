import subprocess

def run_program():
    result = subprocess.run(
        ["./math_program"], capture_output=True, text=True, check=True
    )
    return result.stdout.strip().splitlines()

def test_add_and_multiply_and_square():
    output = run_program()
    assert "a + b = 7" in output[0]
    assert "a * b = 12" in output[1]
    assert "square(a) = 9" in output[2]
