# Cloudflare Pages Deployment Script
# This script helps deploy to Cloudflare Pages via Direct Upload API

Write-Host "`n🚀 Cloudflare Pages Deployment Script`n" -ForegroundColor Green

$projectName = "nasa-ascend-website"
$accountId = Read-Host "Enter your Cloudflare Account ID (or press Enter to use Direct Upload in dashboard)"
$apiToken = Read-Host "Enter your Cloudflare API Token (or press Enter to use Direct Upload in dashboard)"

if ([string]::IsNullOrWhiteSpace($accountId) -or [string]::IsNullOrWhiteSpace($apiToken)) {
    Write-Host "`n📋 DIRECT UPLOAD METHOD (Recommended)`n" -ForegroundColor Yellow
    Write-Host "Since API credentials are not configured, use Direct Upload:" -ForegroundColor Cyan
    Write-Host ""
    Write-Host "1. Go to: https://dash.cloudflare.com" -ForegroundColor White
    Write-Host "2. Navigate to: Workers & Pages → Pages" -ForegroundColor White
    Write-Host "3. Click: 'Create a project' → 'Direct Upload'" -ForegroundColor White
    Write-Host "4. Project name: $projectName" -ForegroundColor White
    Write-Host "5. Drag and drop folder: C:\Users\pfuru\OneDrive\Desktop\NASA-ASCEND-Website" -ForegroundColor White
    Write-Host "6. Click: 'Deploy site'" -ForegroundColor White
    Write-Host "7. Go to: Custom domains → Add: nasaascend.net" -ForegroundColor White
    Write-Host ""
    Write-Host "✅ Your website will be live at: https://nasaascend.net`n" -ForegroundColor Green
    Write-Host "Alternatively, install Cloudflare Wrangler CLI:" -ForegroundColor Cyan
    Write-Host "  npm install -g wrangler" -ForegroundColor White
    Write-Host "  wrangler login" -ForegroundColor White
    Write-Host "  wrangler pages deploy . --project-name=$projectName`n" -ForegroundColor White
    exit 0
}

Write-Host "Attempting to deploy via API..." -ForegroundColor Cyan
# API deployment code would go here if credentials provided
