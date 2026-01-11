# NASA ASCEND Website - Production Deployment Script
# This script helps deploy your website to GitHub Pages

Write-Host "`n🚀 NASA ASCEND Website - Production Deployment`n" -ForegroundColor Green
Write-Host "Step 1: Create GitHub Repository" -ForegroundColor Cyan
Write-Host "===================================" -ForegroundColor Cyan
Write-Host "1. Go to: https://github.com/new" -ForegroundColor Yellow
Write-Host "2. Repository name: nasa-ascend-website" -ForegroundColor Yellow
Write-Host "3. Make it PUBLIC (required for free GitHub Pages)" -ForegroundColor Yellow
Write-Host "4. DO NOT initialize with README, .gitignore, or license" -ForegroundColor Yellow
Write-Host "5. Click 'Create repository'`n" -ForegroundColor Yellow

$username = Read-Host "Enter your GitHub username"
if ([string]::IsNullOrWhiteSpace($username)) {
    Write-Host "`n❌ GitHub username is required!" -ForegroundColor Red
    exit 1
}

Write-Host "`nStep 2: Adding GitHub Remote" -ForegroundColor Cyan
Write-Host "===============================" -ForegroundColor Cyan

# Check if remote already exists
$remoteExists = git remote get-url origin 2>$null
if ($LASTEXITCODE -eq 0) {
    Write-Host "Remote 'origin' already exists. Removing..." -ForegroundColor Yellow
    git remote remove origin
}

git remote add origin "https://github.com/$username/nasa-ascend-website.git"
if ($LASTEXITCODE -eq 0) {
    Write-Host "✅ GitHub remote added successfully!" -ForegroundColor Green
} else {
    Write-Host "❌ Failed to add remote. Please check your repository URL." -ForegroundColor Red
    exit 1
}

Write-Host "`nStep 3: Pushing to GitHub" -ForegroundColor Cyan
Write-Host "===========================" -ForegroundColor Cyan

git branch -M main
git push -u origin main

if ($LASTEXITCODE -eq 0) {
    Write-Host "`n✅ Code pushed to GitHub successfully!`n" -ForegroundColor Green
    Write-Host "Step 4: Enable GitHub Pages" -ForegroundColor Cyan
    Write-Host "===========================" -ForegroundColor Cyan
    Write-Host "1. Go to: https://github.com/$username/nasa-ascend-website/settings/pages" -ForegroundColor Yellow
    Write-Host "2. Under 'Source', select 'Deploy from a branch'" -ForegroundColor Yellow
    Write-Host "3. Branch: main, Folder: / (root)" -ForegroundColor Yellow
    Write-Host "4. Click 'Save'" -ForegroundColor Yellow
    Write-Host "5. Wait 1-2 minutes for deployment`n" -ForegroundColor Yellow
    Write-Host "🌐 Your site will be live at:" -ForegroundColor Green
    Write-Host "   https://$username.github.io/nasa-ascend-website/`n" -ForegroundColor Cyan
} else {
    Write-Host "`n❌ Failed to push to GitHub." -ForegroundColor Red
    Write-Host "Please make sure:" -ForegroundColor Yellow
    Write-Host "1. GitHub repository exists at: https://github.com/$username/nasa-ascend-website" -ForegroundColor Yellow
    Write-Host "2. You have authentication set up (GitHub CLI or credentials)" -ForegroundColor Yellow
    Write-Host "`nTo set up GitHub authentication:" -ForegroundColor Cyan
    Write-Host "  gh auth login  (if you have GitHub CLI)" -ForegroundColor White
    Write-Host "  OR configure Git credentials in Windows Credential Manager`n" -ForegroundColor White
}
