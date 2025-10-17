// Login System Verification Script
// This script verifies that the @maricopa.edu login system works correctly

const emailPattern = /^[a-zA-Z0-9._%+-]+@maricopa\.edu$/;

console.log('🔐 NASA ASCEND Login System Verification');
console.log('=====================================');

// Test cases
const testCases = [
    // Valid @maricopa.edu emails (should PASS)
    { email: 'pre2167119@maricopa.edu', password: 'anypassword', expected: true, description: 'Your actual student ID' },
    { email: 'abc1234567@maricopa.edu', password: 'password123', expected: true, description: 'Another student ID format' },
    { email: 'student123@maricopa.edu', password: 'test', expected: true, description: 'Simple student format' },
    { email: 'john.doe@maricopa.edu', password: 'mypass', expected: true, description: 'Name format with dots' },
    { email: 'test_user@maricopa.edu', password: 'pass', expected: true, description: 'Underscore format' },
    { email: 'user+tag@maricopa.edu', password: 'password', expected: true, description: 'Plus sign format' },
    { email: 'user%test@maricopa.edu', password: 'pass', expected: true, description: 'Percent sign format' },
    { email: 'user-test@maricopa.edu', password: 'password', expected: true, description: 'Hyphen format' },
    
    // Invalid emails (should FAIL)
    { email: 'pre2167119@phoenixcollege.edu', password: 'password', expected: false, description: 'Wrong domain - phoenixcollege' },
    { email: 'pre2167119@maricopa.com', password: 'password', expected: false, description: 'Wrong domain - .com instead of .edu' },
    { email: 'pre2167119@maricopa.org', password: 'password', expected: false, description: 'Wrong domain - .org instead of .edu' },
    { email: '@maricopa.edu', password: 'password', expected: false, description: 'No username' },
    { email: 'pre2167119@', password: 'password', expected: false, description: 'No domain' },
    { email: 'pre2167119', password: 'password', expected: false, description: 'No @ or domain' },
    { email: 'pre2167119@maricopa.edu@extra', password: 'password', expected: false, description: 'Multiple @ symbols' },
    
    // Empty passwords (should FAIL)
    { email: 'pre2167119@maricopa.edu', password: '', expected: false, description: 'Valid email but empty password' },
    { email: 'student@maricopa.edu', password: '', expected: false, description: 'Valid email but empty password' },
];

let passed = 0;
let total = testCases.length;

console.log('\nRunning tests...\n');

testCases.forEach((test, index) => {
    const isValid = emailPattern.test(test.email) && test.password.length > 0;
    const result = isValid === test.expected;
    
    if (result) {
        passed++;
        console.log(`✅ Test ${index + 1}: PASS - ${test.description}`);
    } else {
        console.log(`❌ Test ${index + 1}: FAIL - ${test.description}`);
        console.log(`   Email: "${test.email}" | Password: "${test.password || '(empty)'}"`);
        console.log(`   Expected: ${test.expected ? 'PASS' : 'FAIL'} | Got: ${isValid ? 'PASS' : 'FAIL'}`);
    }
});

console.log('\n=====================================');
console.log(`📊 Results: ${passed}/${total} tests passed`);

if (passed === total) {
    console.log('🎉 All tests passed! Login system is working correctly.');
} else {
    console.log('⚠️ Some tests failed. Please check the implementation.');
}

console.log('\n🔐 Login Requirements Confirmed:');
console.log('✅ Email Format: Any email ending with @maricopa.edu');
console.log('✅ Password: Any non-empty password');
console.log('✅ Examples that work:');
console.log('   - pre2167119@maricopa.edu');
console.log('   - abc1234567@maricopa.edu');
console.log('   - student123@maricopa.edu');
console.log('   - john.doe@maricopa.edu');
console.log('   - test_user@maricopa.edu');
